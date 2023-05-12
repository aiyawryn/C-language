#include <stdio.h>

int main(){
    
    int i, x[6], sum = 0;
    
    printf("address of x: %d\n",&x);
    printf("address of x[0]: %d\n",&x[0]);

    printf("Enter 6 numbers: ");

    for ( i = 0; i < 6; i++)    {

        scanf("%d", x+i);
        sum += *(x+i);  // access elements of the array, using pointer
    }
    printf("Sum = %d", sum);    

    return 0;
}