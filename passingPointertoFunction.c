#include <stdio.h>

void addOne(int *ptr){
    printf("before addding: %d\n",*ptr);
    (*ptr)++;  //adding 1 to ptr > 10+1
}

int main(){

    int i = 10;
    int *p;
    p = &i;
    
    addOne(p);

    printf("after adding: %d",*p);

    return 0;
}