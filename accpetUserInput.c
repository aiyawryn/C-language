#include <stdio.h>
#include <string.h>

int main(){

    // accpet user input

    char name[25];
    int age;

    printf("What's your name?\t");
    //scanf("%s",&name);                   //read input, & is address of operator, can't read white space

    fgets(name, 25, stdin);                // can read white space, include new line character when user hit enter
    name[strlen(name)-1] = '\0';            // rid of the new line character


    printf("How old are you?\t");
    scanf("%d",&age);                   

    printf("Hello %s, how are you?\n",name);
    printf("You are %d years old.", age);

    return 0;
    
}