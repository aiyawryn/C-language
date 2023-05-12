#include <stdio.h>

int main(){

    int iseisu = 12345;
    float fjissu = 54321.0;
    
    float result = iseisu/fjissu;

    printf("%015.8f\n",result);
    printf("%15.8e",result);    

    return 0;
}