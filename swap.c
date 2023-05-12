#include <stdio.h>
#include <string.h>

int main(){

    char x[] = "water";
    char y[] = "lemonade";
    char temp[15];

    // When working with Array, it's not enough to simply assign value
    // --> use string COPPY FUNCTION

    printf("x size : %d\n",sizeof(x));
    printf("y size : %d\n",sizeof(y));

    strcpy(temp,x);
    strcpy(x,y);
    strcpy(y,temp);


    printf("x = %s\n",x);
    printf("y = %s\n",y);

    return 0;
}