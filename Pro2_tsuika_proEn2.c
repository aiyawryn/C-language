#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct perinfo{
    char name[20];
    int age;
    float weight;
    float height;
};

int main(int argc, char *argv[]){   

    struct perinfo per;    

    FILE *file = fopen(argv[1],"a+"); 

    if ( file == NULL ){
        printf("cannot open file..");
        exit(1);
    }

    //writing to file.
    
    do
    {
        fseek(file,0,SEEK_END);
          
        printf("Name=\n");
        scanf("%s",per.name);                 

        printf("Age=\n");
        scanf("%d",&per.age);          

        printf("Weight=\n");
        scanf("%f",&per.weight);          

        printf("Height=\n");
        scanf("%f",&per.height); 

        fprintf(file,"%-20s %3d %6.1f %6.1f",per.name,per.age,per.weight,per.height); 
        fprintf(file,"\n");                       

    } while ((getchar()) != '\n');        

    fclose(file);
    
    return 0;
}