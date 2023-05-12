#include <stdio.h>

int main(){
    
    char date[10];
    char name[10];
    char *p=date;

    printf(">>input(yymmdd name)? ");
    scanf("%s %s",&date,&name);   

    printf("yy --> %c%c\n",*p,*(p+1));
    printf("mm --> %c%c\n",*(p+2),*(p+3));
    printf("dd --> %c%c\n",*(p+4),*(p+5));
    printf("name --> %s\n",name);   
    
    return 0;
}