#include <stdio.h>

float popavg(int a, float b){ return (a/b);}

struct info
{
    char *city;
    int area;
    float pop;
};

int main(){

    unsigned long int ttArea = 0;
    double ttpop = 0;
    double avepop;

    struct info data[7] = {"SAPPORO",1118,140.2,
                            "SENDAI",237,66.5,
                            "TOKYO",596,835.2,
                            "NAGOYA",328,208.8,
                            "OSAKA",212,264.8,
                            "HIROSHIMA",637,89.9,
                            "FUKUOKA",336,108.9};    
    
    for (int i = 0; i < 7; i++)
    {   
        ttArea += data[i].area;
        ttpop += data[i].pop;        

        printf("population average per an area in %s is %.1f ten thousand persons\n", data[i].city,popavg(data[i].area,data[i].pop));
    } 

    printf("Total area of all cities: %lu km^2\n",ttArea);
    printf("Total Population: %.1lf ten thousand persons\n",ttpop);  
    printf("Total Average Population: %.1lf ten thousand persons\n",popavg(ttArea,ttpop));

    return 0;
}