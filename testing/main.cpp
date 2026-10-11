
#include <cstdlib>
#include <experimental/filesystem>
#include <features.h>
#include <stdio.h>
#include <lib/essential/inpconfig.hh>
#include <sys/types.h>
#include <unistd.h>
#include <iostream>
#include <future>
#include <pthread.h>
#include <bit>
int main(){
    // // printf("%s\n", INP_VERSION_STRING__);
    // system(""); 


    // std::experimental::filesystem::copy_options::overwrite_existing;
    
unsigned int jumlah_core = std::thread::hardware_concurrency();
std::cout << "Komputer ini bisa menjalankan " << jumlah_core << " tugas sekaligus!\n";

}