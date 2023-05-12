#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    int age,marks,roll;
    char name[30];
    char school[50];
};

int main(){

    FILE *fp;
    fp = fopen("stu.dat","w");

    if ( fp == NULL )
    {
        fprintf(stderr,"Can't open the file");
        exit(1);
    }

    struct Student s1 = {12,56,10,"Jenny","St thomas high school"};
    struct Student s2 = {15,60,10,"Rose","St thomas high school"};
    struct Student s3 = {16,78,10,"Lisa","St thomas high school"};
    struct Student s4 = {17,66,10,"Jisoo","St thomas high school"};

    //Wring all the record into a file.

    fwrite(&s1,sizeof(struct Student),1,fp);
    fwrite(&s2,sizeof(struct Student),1,fp);
    fwrite(&s3,sizeof(struct Student),1,fp);
    fwrite(&s4,sizeof(struct Student),1,fp);

    if( fwrite != 0)
    {
        printf("Conthents are written to the file");
    }
    else
    {
        printf("SOme error occured");
    }
    fclose(fp);
        

    return 0;
}