#include <stdio.h>

int main(){

    // constant = fixed value that cannot be altered by the program during its execution

    const float PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf",&radius);

    circumference = 2*PI*radius;
    area = PI*radius*radius;

    printf("\ncircumference: %lf",circumference);
    printf("\narea: %lf",area);
        

    return 0;
}