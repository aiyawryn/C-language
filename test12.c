#include <stdio.h>


// return = return a value back to a calling Function.

double square(double x){

    double result =  x * x;
    return result;

}

int main(){

    double x = square(3.14);
    printf("%lf",x);
    
    return 0;
}