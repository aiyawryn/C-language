#include <stdio.h>

void birthday(char name[], int age){

    printf("\nHappy Birth Day to %s!",name);
    printf("\nYou are %d years old!",age);
    
}

int main(){

    //char name[] = "Aiya";
    //int age = 21;

    birthday("Aiya", 21);
   

    return 0;
}