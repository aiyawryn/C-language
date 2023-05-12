#include <stdio.h>

int main(){

    int a[] = {5,16,7,89,45,32,23,10};
    int *p = &a[1];
    int *q = &a[5];

    printf("value p before: %d\n",*p);
    printf("value p+3: %d\n", *(p+3));
    printf("value p : %d\n", *p);
    printf("\n");

    printf("value 1 before: %d\n",*q);
    printf("value q+3: %d\n", *(q-3));
    printf("value p : %d\n", *q);
    printf("\n");

    printf("%d\n", p > q);
    printf("%d\n", *p < *q);


    return 0;
}