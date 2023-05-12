#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct perinfo{
    char name[20];
    int age;
    double weight;
    double height;
}per;

FILE *file;

void insert(){

    fseek(file,0,SEEK_END);
          
    printf("Name=\n");
    scanf("%s",&per.name);                 

    printf("Age=\n");
    scanf("%d",&per.age);          

    printf("Weight=\n");
    scanf("%lf",&per.weight);          

    printf("Height=\n");
    scanf("%lf",&per.height); 

    fprintf(file,"%-20s %3d %6.1lf %6.1lf",per.name,per.age,per.weight,per.height); 
    fprintf(file,"\n"); 
}

void search(){

    char sname[20];
    printf("Name=\n");
    scanf("%s",&sname);

    if ( sname == per.name )
    {
        printf("%-20s %3d %6.1lf %6.1lf",per.name,per.age,per.weight,per.height);
    }
    else{
        printf("No data...\n");
    }

}

void display(){

    rewind(file);

    
}

int main(int argc, char *argv[]){ 

    char input;

    file = fopen(argv[1],"a+"); 

    if ( file == NULL ){
        printf("cannot open file..");
        exit(1);
    }

    while ( input != 'e' )
    {
        printf("Input command\n");
        printf("i(:insert) s(:search) d(:display) e(:end)\n");
        scanf("%c",&input);

        switch (input)
        {
        case 'i':
            insert();
            break;
    
        case 's':
            search();
            break;
    
        case 'd':
            display();
            break;
    
        case 'e':
            break;
        }
    }     
    fclose(file);
    
    return 0;
}