#include <stdio.h>
#define ops 4

float sum(float a, float b ) { return (a+b); }
float sub(float a, float b ) { return (a/b); }
float mult(float a, float b ) { return (a*b); }
float div(float a, float b ) { return (a/b); }

int main(){

    float (*ptr2func[ops])(float, float) = { sum, sub, mult, div };
    int choice;
    float a,b;

    printf("Enter your choice: 0 for sum, 1 for sub, 2, for mult, 3 for div: ");
    scanf("%d",&choice);

    printf("Enter the two number: ", &a,&b);
    scanf("%f %f",&a,&b);

    printf("%f",ptr2func[choice](a,b));

    return 0;
}