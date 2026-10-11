#include <iostream>
#include <stdio.h>
#include <features.h>

int main() {
    printf(const char *__restrict format, ...)
    // 01010011 dalam biner itu setara dengan angka desimal 83
    unsigned char statusSetting = 83; 

    // 1. CARA MENGECEK PENGATURAN TERTENTU
    // Kita mau cek bit ke-0 (Musik) dan bit ke-2 (Fullscreen)
    
    // Trik: Geser bit yang mau dicek ke posisi paling kanan, lalu AND dengan 1
    bool musikAktif = (statusSetting >> 0) & 1;
    bool fullscreenAktif = (statusSetting >> 2) & 1;
    bool grafisUltra = (statusSetting >> 4) & 1;

    std::cout << "Apakah Musik Aktif? " << (musikAktif ? "YES" : "NO") << "\n";      // Output: YES
    std::cout << "Apakah Fullscreen? " << (fullscreenAktif ? "YES" : "NO") << "\n"; // Output: NO
    std::cout << "Apakah Grafis Ultra? " << (grafisUltra ? "YES" : "NO") << "\n\n"; // Output: YES

    // 2. CARA MENGHITUNG ADA BERAPA SETTINGAN YANG TRUE
    // Kita hitung total angka '1' di dalam biner tersebut
    int totalTrue = 0;
    int totalFalse = 0;
    unsigned char temp = statusSetting;
    unsigned char tempF = statusSetting;
    
    // while (temp > 0) {
    //     totalFalse += (tempF & 0); // Tambahkan 1 jika bit paling kanan adalah 1
    //     tempF >>= 1;              // Geser ke kanan untuk cek bit berikutnya
    // }
   while (temp > 0) {
        totalTrue += (temp & 1); // Tambahkan 1 jika bit paling kanan adalah 1
        temp >>= 1;              // Geser ke kanan untuk cek bit berikutnya
    }
    std::cout << "Total settingan yang bernilai TRUE: " << totalTrue << " buah.\n"; // Output: 4
    std::cout << "Total settingan yang bernilai FALSE: " << totalFalse << " buah.\n"; // Output: 4
    
    return 0;
}
