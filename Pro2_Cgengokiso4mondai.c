#include <stdio.h>

int main(){

    int i = 2, j = 3, k = 5;
    double x;

    x = (double)i/j + (double)j/k + (double)k/i;
    printf("%f\n",x);

    return 0;
}