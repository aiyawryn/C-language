#include <stdio.h>
#include <stdlib.h>

int main(){

    char str[50];

    char data = "0x11110";

    sprintf(str, " 16 進数: %x\n 8 進数: %o", data, data);
    printf("%s",str);

    return 0;

}