#include <stdio.h>

int main(){

    int x = 3;
    int y = 10;

    int step1 = ( ++x ) * 5 + ( y-- ) * 3;
    printf("x: %d, y: %d, result: %d\n",x,y,step1);

    int step2 = ( x++ ) + ( --y );
    printf("x: %d, y: %d, result: %d\n",x,y,step2);

    int step3 = x + y;
    printf("x: %d, y: %d, result: %d\n",x,y,step3);
    

    return 0;
}