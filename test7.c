#include <stdio.h>
#include <math.h>

int main(){
    
    double A;
    double B;
    double C;

    printf("Enter side A\t");
    scanf("%lf",&A);

    printf("Enter side B\t");
    scanf("%lf",&B);

    C = sqrt(A*A + B*B);

    printf("side c : %lf",C);

    return 0;

}