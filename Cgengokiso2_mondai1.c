#include <stdio.h>

int main(){

    int number1;
    int number2;

    printf("Enter the number1: ");
    scanf("%d",&number1);

    printf("Enter the number2: ");
    scanf("%d",&number2);

    if(number1 < number2){
        printf("%d %d",number2,number1);
    }else{
        printf("not exchanged %d %d",number1,number2);
    }   

    return 0;

}