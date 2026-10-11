// #include <cstdio>
// #include <inpconfig.hh>
// #include <immintrin.h>
// int main(){
//     printf("kamu memakai versi : %s\n", __INP_VERSION_STRING__);
//     return 0;
// }
// #include <chrono>      // Untuk menghitung waktu eksekusi
// #include <immintrin.h> // Header wajib untuk AVX2
// #include <iostream>
// #include <vector>

// // 1. VERSI BIASA (Scalar)
// void perkalianBiasa(const float *a, const float *b, float *hasil, int ukuran) {
//   for (int i = 0; i < ukuran; ++i) {
//     hasil[i] = (a[i] * b[i]) + (a[i] * a[i]) - (b[i] * b[i]);
//   }
// }

// // 2. VERSI LOW-LEVEL (SIMD AVX2)
// void perkalianAVX2(const float *a, const float *b, float *hasil, int ukuran) {
//   // Loop melompat 8 elemen sekaligus karena register AVX2 memuat 8 float
//   for (int i = 0; i < ukuran; i += 8) {
//     __m256 reg_a = _mm256_loadu_ps(&a[i]);
//     __m256 reg_b = _mm256_loadu_ps(&b[i]);

//     __m256 ab = _mm256_mul_ps(reg_a, reg_b);
//     __m256 aa = _mm256_mul_ps(reg_a, reg_a);
//     __m256 bb = _mm256_mul_ps(reg_b, reg_b);

//     __m256 total = _mm256_sub_ps(_mm256_add_ps(ab, aa), bb);
//     _mm256_storeu_ps(&hasil[i], total);
//   }
// }

// int main() {
//   // Kita buat array berukuran 8 Juta elemen (kelipatan 8)
//   const int UKURAN = 8000000;
//   std::vector<float> dataA(UKURAN, 2.5f); // Isi semua dengan 2.5
//   std::vector<float> dataB(UKURAN, 4.0f); // Isi semua dengan 4.0
//   std::vector<float> hasil(UKURAN, 0.0f);

//   // --- UJI COBA VERSI BIASA ---
//   auto mulai = std::chrono::high_resolution_clock::now();
//   perkalianBiasa(dataA.data(), dataB.data(), hasil.data(), UKURAN);
//   auto selesai = std::chrono::high_resolution_clock::now();
//   std::chrono::duration<double, std::milli> waktuBiasa = selesai - mulai;
//   std::cout << "Waktu Loop Biasa: " << waktuBiasa.count() << " ms\n";

//   // --- UJI COBA VERSI AVX2 ---
//   mulai = std::chrono::high_resolution_clock::now();
//   perkalianAVX2(dataA.data(), dataB.data(), hasil.data(), UKURAN);
//   selesai = std::chrono::high_resolution_clock::now();
//   std::chrono::duration<double, std::milli> waktuAVX2 = selesai - mulai;
//   std::cout << "Waktu SIMD AVX2 : " << waktuAVX2.count() << " ms\n";

//   // Verifikasi sampel hasil (2.5 * 4.0 harusnya 10.0)
//   std::cout << "Sampel hasil elemen ke-0: " << hasil[0] << "\n";

//   return 0;
// }


// #include <cmath>
// #include <cstdio>
// #include <inpconfig.hh>
// #include <imgui/imgui.h>
// #include <iostream>
// // [[msvc::noinline]]
// __attribute__((__noinline__))
// __DECL_SIMD_expm1f64x
// int main(){
//         printf("hello world %s", INP_VERSION_STRING__);
//         return 0;
// }
// void Mahasiswa(const char* nama, const char* energi){
//         this.nama = nama;
//     }

#include <cstdio>
#include <iostream>
#include <cmath>
int kurang(int a, int b) {
    while (b != 0) {
        int borrow = (~a) & b; // Cari bit pinjaman
        a = a ^ b;             // Kurangkan bit
        b = borrow << 1;       //  Geser bit pinjaman ke kiri
    }
    return a;
}
int main(){
    // int data = 12345;
    // int kunci = 31425;

    // int enkripsi = data ^ kunci;
    // printf("%d\n", enkripsi);

    // int deskripsi = enkripsi ^ kunci;
    // printf("%d\n", deskripsi);
    // printf("%d\n", kurang(6,3));
    // while (b != 0) {
    //     int borrow = (~a) & b; // Cari bit pinjaman
    //     a = a ^ b;             // Kurangkan bit
    //     b = borrow << 1;       //  Geser bit pinjaman ke kiri
    // }
    // return a;
    //     int a = 23;
    // int b = 8;
    // while(b != 0){
    
    // int borrow = (~a) & b;
    // a = a ^ b;
    // b = borrow << 1;
    // // }
    // // printf("%d", a);
    //     std::cout << "1000 : " << (1000 >> 1) << std::endl;
    //     std::cout << "1000 : " << (1000 << 1) << std::endl;
    //     std::cout << "1000 : " << (2 << 0) << std::endl;
        
        int x = 2;
        int y = ;
        int total;
    for(int i = 0; i < y; i++){
         total = x * y;
    }

    printf("%d", total);

}