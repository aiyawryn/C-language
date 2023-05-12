#include <stdio.h>

float acircle(int r){
    
    float pi = 3.141592654;
    return r * r * pi; 
}
int main(){

    int radius;
    printf("Enter a radius: ");
    scanf("%d",&radius);

    printf("%f",acircle(radius));

    return 0;
}