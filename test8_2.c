#include <stdio.h>
#include <ctype.h>

int main(){

    char grade;

    printf("Enter your grade: ");
    scanf("%c",&grade);
    grade = toupper(grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect!\n");
        break;
    
    case 'B':
        printf("You did good\n");
        break;
    
    case 'C':
        printf("You did OK\n");
        break;

    case 'D':
        printf("At least!\n");
        break;
    
    case 'F':
        printf("YOU FAILED!\n");
        break;    

    default:
        printf("Please enter only valid grade\n");
        break;
    }


    return 0;
}
