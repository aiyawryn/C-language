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
    char sname[20];  
    long int recsize;   
         

    FILE *file = fopen(argv[1],"r+"); 

    if ( file == NULL ){
        printf("cannot open file..");
        exit(1);
    } 

    recsize = sizeof(per);
    char buffer[recsize];
    char bfname[20];
    int sage;
    float sweight;
    float sheight;


    while ( 1 )
    {        
        char choice;
        printf("i(:insert) s(:search) d(:display) e(:end)\n");
        fflush(stdin);
        choice = getchar();

        switch ( choice )
        {
        case 'i':
        
            system("cls");
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

            break;

        case 's':
            system("cls");
            printf("Enter full name ");
            fflush(stdin);
            scanf("%s",sname);
            rewind(file);  

            while ( fscanf(file,"%s %d %f %f",bfname,&sage,&sweight,&sheight) != EOF)
            {   
                if ( strcmp(bfname,sname) == 0)
                {
                    printf("%-20s %3d %6.1f %6.1f\n",bfname,sage,sweight,sheight); 
                    break;
                }                         
                                
            }
            break;                                     
        
        case 'd':  
            system("cls");
            rewind(file);        
            while ( fgets(buffer,recsize,file) != NULL )
            {
                fputs(buffer,stdout);
            }
            break;                 
              

        case 'e':
            fclose(file);
            exit(0); 
        }
    } 
    
    return 0;
}