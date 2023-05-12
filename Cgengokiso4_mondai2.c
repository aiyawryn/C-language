#include <stdio.h>

int main(){

    char str[100];    
    int count = 0, i = 0;
    char *p = str;

    printf("Enter the words: " );
    scanf("%s",str);    

    while (*(p+i))
    {
        count++;
        i++;
    }
    printf("%d ",count);
    

    return 0;
}