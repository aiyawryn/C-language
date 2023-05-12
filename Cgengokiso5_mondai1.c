#include <stdio.h>

int main(){

    int x = 0x15a7;
    int y = 0xf13c;

    printf("%x\n", x & y);
    printf("%x\n", x | y);
    printf("%x\n", x ^ y);

    return 0;
}