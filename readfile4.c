#include <stdio.h>
#include <stdlib.h>

char *read_file( char *filename );

int main(){

    char filename[1024];
    printf("File : ");
    scanf("%s",&filename);

    char *file_contents = read_file(filename);
    if ( file_contents == NULL )
    {
        printf("Error reading file.\n");
        return 1;
    }
    printf("%s",file_contents);

    free(file_contents);

    return 0;
}

char *read_file( char *filename )
{
    FILE *file;

    file = fopen(filename,"r");

    if ( file == NULL ) return NULL;    

    char c;
    char *string;
    int i = 0;

    while ( (c = fgetc(file)) != EOF )
    {
        string[i] = c;
        i++;
    }

    fclose(file);
    return string;
    
}