#include <stdio.h>

int scmp( char *ps1, char *ps2 );

int main(){

    char s1[20];
    char s2[20];

    printf("Enter the string1: ");
    scanf("%s",s1);
    printf("Enter the string2: ");
    scanf("%s",s2);
    
    int compare = scmp(s1,s2);

    printf("%d", compare);

    return 0;
}

int scmp( char *a, char *b )
{
    int flag = -99;
    while ( *a || *b )
    {
        if ( *a == *b )
        {
            flag = 0;
            a++;
            b++;
        }
        if ( *a < *b )
        {
            flag = -1;
            break;
        }
        if ( *a > *b )
        {
            flag = 1;
            break;
        }          
        
    }
    return flag;    
}


    
    
    
    


