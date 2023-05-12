#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *source, *target;
    char source_file[100], target_file[100],c;

    printf("Enter name of source file ");
    scanf("%s",source_file);
    source = fopen(source_file,"r");

    printf("Enter name of target file ");
    scanf("%s",target_file);
    target = fopen(target_file,"w");

    if( source == NULL || target == NULL ){
        printf("Error openning file\n");
        return 1;
    }

    while ( (c = fgetc(source)) != EOF )
        fputc(c,target);    
   
    fclose(source);
    fclose(target);
    return 0;
}