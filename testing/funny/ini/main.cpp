#include <cstdio>

int main(){
    register int angka asm("r12") = 42;
    printf("Hello world");
    return 0;
}