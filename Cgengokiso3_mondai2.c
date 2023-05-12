#include <stdio.h>

int gcd(int x, int y){

    int tmp, r;
    if( x < y ){
        tmp = x;
        x = y;
        y = tmp;
    }
    r = x % y;
    while( r != 0 ){
        x = y;
        y = r;
        r = x % y;
    }
    return y;      
}

int main(){

    int x,y;

    printf("gcd ");
    scanf("%d",&x);    
    scanf("%d",&y);

    printf("gcd(%d, %d) = %d",x,y,gcd(x,y));       

    return 0;
}