#include <stdio.h>

int main(){

    char ex[] = "Example";
    char *pEx = ex;

    printf("%c %c",*(pEx+1),*(pEx+4));

    return 0;
}