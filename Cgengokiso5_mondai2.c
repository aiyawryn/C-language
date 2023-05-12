#include <stdio.h>

int main(){

    int x = 0xa234;
    int y = 36;

    printf("Hexadecimal x << 3 : %x\n", x << 3);
    printf("Hexadecimal x << 3 : %x\n", x >> 1);
    printf("Decimal number y << 1 : %d\n", y << 1);
    printf("Decimal number y << 1 : %d\n", y >> 2);
}