#include <stdio.h>
#include <stdlib.h>


void cal1( int inum, int *pidata, int *pimax, int *pimin, int *piave );

void cal1( int inum, int *pidata, int *pimax, int *pimin, int *piave )
{
    int sum = 0;    

    for( int i = 0; i < inum; i++ ){

        if ( *pidata >= *pimax )
        {            
            *pimax = *pidata;            
        } 
        if ( *pidata <= *pimin )
        {
            *pimin = *pidata;            
        }
        sum = sum + *pidata;
        pidata++;
              
    }

    *piave = sum/inum;    
    
}

int main(){

    int num;
    int data[200];
    int max,min,ave;
    

    printf("Enter number:  ");
    scanf("%d",&num);   

    int i = 0;
    while ( i < num ){
        printf("number %d: ",i+1);
        scanf("%d",&data[i]);
        i++;
    }

    max = min = data[0];
    ave = 0;   

    cal1( num, data, &max, &min, &ave);
    
    printf("\n");
    printf("max is : %d\n",max);
    printf("min is : %d\n",min);
    printf("ave is : %d\n",ave);
    
    return 0;
}

