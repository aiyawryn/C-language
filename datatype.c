#include <stdio.h>

int main(){

    char a = 'C';                   // single character %c
    char b[] = "Aiya";              // array of character %s

    float c = 3.141592653589793;    // 4 bytes (32 bits of precision) 6-7 digits %f
    double d = 3.141592653589793;   // 8 bytes ( 64 bits of precision) 15-16 digits %lf

    //bool e = true;                // 1 byte (true or false) %d

    char f = 120;                   // 1 byte (-128 to +127) %d or %c      
    unsigned char g = 255;          // 1 byte (0 to +255) %d or %c   

    short h = 32767;                // 2 bytes (-32,768 to +32,767) %d
    unsigned short i = 65535;       // 2 bytes (0 to +65,535) %d   

    int j = 21478343;               // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295;    // 4 bytes (0 to + 4,294,967,295) %u       

    long long int l = 92233424324;    // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18434342344256123456U;  // 8 bytes (0 to +9 quintillion) %llu



    printf("c = %f\t",c);
    printf("c.15 = %0.15f\n",c);
    printf("d = %lf\t",d);
    printf("d.15 = %0.15lf\n",d);

    //printf("bool = %d",e);
    printf("char d = %d\t",f);
    printf("char c = %c\n",f);
    printf("unsigned char = %d\n",g);

    printf("short int = %d\t",h);
    printf("unsigned short int = %d\n",i);

    printf("int = %d\t",j);
    printf("unsigned int = %u\n",k);

    printf("long long int = %lld\t",l);
    printf("unsigned long long int = %llu\n",m);


    return 0;
}