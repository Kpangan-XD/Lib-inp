#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define NUM_THREADS 4
#define CHUNK_SIZE 1024

// Struktur untuk mengelola buffer memori mentah (Custom Memory Pool)
typedef struct {
    char *raw_memory;
    size_t offset;
    pthread_mutex_t lock;
} MemoryPool;

MemoryPool* create_pool(size_t total_size) {
    MemoryPool *pool = (MemoryPool*)malloc(sizeof(MemoryPool));
    pool->raw_memory = (char*)malloc(total_size);
    pool->offset = 0;
    pthread_mutex_init(&pool->lock, NULL);
    return pool;
}

// Fungsi alokasi kustom tingkat rendah (Mirip malloc internal)
void* pool_alloc(MemoryPool *pool, size_t size) {
    void *allocated_ptr = NULL;
    
    // BUG 1: Penguncian mutex yang tidak tepat (Race Condition di batas memori)
    if (pool->offset + size <= 10240) { 
        pthread_mutex_lock(&pool->lock);
        
        allocated_ptr = (void*)(pool->raw_memory + pool->offset);
        usleep(10); // Mensimulasikan delay pemrosesan hardware
        pool->offset += size;
        
        pthread_mutex_unlock(&pool->lock);
    }
    return allocated_ptr;
}

// Fungsi yang dijalankan oleh setiap Thread
void* worker_thread(void *arg) {
    MemoryPool *pool = (MemoryPool*)arg;
    
    for (int i = 0; i < 5; i++) {
        int *data = (int*)pool_alloc(pool, sizeof(int) * 10);
        
        if (data != NULL) {
            // Mengisi data ke dalam memori yang dialokasikan
            for (int j = 0; j < 10; j++) {
                data[j] = j * 10; 
            }
            // Menggunakan %p untuk mencetak alamat memori pointer data
            printf("Thread %ld berhasil menulis ke alamat: %p\n", (long)pthread_self(), (void*)data);
        }
    }
    return NULL;
}

int main() {
    // Membuat memory pool sebesar 10 KB
    MemoryPool *my_pool = create_pool(10240);
    
    // PERBAIKAN DI SINI: Deklarasi tipe data pthread_t dengan nama variabel threads
    pthread_t threads[NUM_THREADS];

    // Membuat 4 thread yang mengakses memory pool yang sama secara bersamaan
    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_create(&threads[i], NULL, worker_thread, (void*)my_pool);
    }

    // Menunggu semua thread selesai
    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("Semua thread selesai. Offset akhir pool: %zu\n", my_pool->offset);
    
    // BUG 3: Memory Leak (Hanya menghapus pool, bukan raw_memory di dalamnya)
    free(my_pool); 
    return 0;
}
