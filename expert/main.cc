// #include <cstdio>
// #include <exception>
// #include <iostream>
// #include <string>
// #include <lib/essential/inpconfig.hh>

// #include <lib/expert/inp_macro.hh>

// // const char isi[] = "Ganteng";
// // const char* box = isi; 
// // const char** another_box = &box;
// // const char*** another_box_a = &another_box;
// // const char**** another_box_b = &another_box_a;
// // const char**& mailed = another_box;
 
 
// int main(){
//     std::string prompt;
//     std::cin >> prompt;

//     inp_switch(prompt) {
//         inp_case("Who Are you?")
//         printf("yea");
//         inp_default
//         printf("NOPE");
//     }

//     return 0;
// }


#include <iostream>

int main() {
    // Angka-angka ini adalah kode ASCII untuk H, a, l, o, (spasi), D, u, n, i, a, !
    long long sihir[] = {72, 97, 108, 111, 32, 68, 117, 110, 105, 97, 33, 0};
    
    // Membaca isi memori secara paksa menggunakan pointer casting
    char* penunjuk = (char*)sihir;
    
    while (*penunjuk) {
        // Menggeser pointer sejauh 8 byte (karena long long) untuk mengambil karakter berikutnya
        std::cout << *penunjuk;
        penunjuk += sizeof(long long); 
    }
    std::cout << std::endl;
    return 0;
}
