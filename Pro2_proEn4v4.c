#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){ 

    int number = argc - 1; 

    char **strings;
    strings = malloc(number*sizeof(char *));

    for (int i = 0; i < number; i++)
    {
        strings[i] = argv[i+1];
    }
    char *tmp;
    printf("number = %d\n",number);

    for (int i = 0; i < number-1; i++)
    {
        tmp = malloc(sizeof(char)*strlen(strings[i]));  
        for (int j = i+1; j < number; j++)
        {
            if ( strcmp(strings[i], strings[j]) > 0 )
            {
                strcpy(tmp, strings[i]);
                strcpy(strings[i],strings[j]);
                strcpy(strings[j],tmp);
            }       
            
        }             
        
    }   
    
    for (int i = 0; i < number; i++)
    {
        printf("%s\n",strings[i]);
    }
    free(tmp);
    free(strings);

    return 0;
}

