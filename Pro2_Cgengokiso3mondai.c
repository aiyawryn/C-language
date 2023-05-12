#include <stdio.h>
#include <stdlib.h>

int main(){

    long num1 = strtol("11", NULL, 8);
    printf("%ld\n",num1);

    long num2 = strtol("11", NULL, 16);
    printf("%ld",num2);
   
    return 0;
    
}