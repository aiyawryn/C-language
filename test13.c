#include <stdio.h>

int findMax(int x, int y){
    
    return( x > y ) ? x : y;

}

int main(){

    // ternary operator = shortcut to if/else when assigning/returnin a value
    // (condition) ? value if true : false

    int max = findMax(5,4);
    printf("%d",max);


    return 0;
}