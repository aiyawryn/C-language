#include <stdio.h>

int main(){

    int a[] = {11,22,36,5,2};
    int sum = 0;
    int *p;

    for( p = a; p <= a + 4; p++)
        sum += *p;

    printf("Sum is: %d",sum);


    return 0;
}