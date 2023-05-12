#include <stdio.h>
#include <math.h>

int main(){

    double x;
    int n;
    int i = 1;
    double j = 3;
    double fact = 1;
    int sign = -1;  

    printf("input x > ");
    scanf("%lf",&x);

    printf("input n > ");
    scanf("%d",&n);

    double sinx = sin(x);
    double maku = x;

    do
    {
        printf("%2d : %20.15lf\t",i,sinx);       
        
        if ( i == 1 ){
            maku = x;
        }           
        else{

            fact = fact * j * ( j - 1 );
            maku = maku + ( sign * pow(x,j)/fact );
            j+=2;
            sign = sign * -1;
        }              

        i++;                      
        
        printf("%25.15lf\t",maku);
        printf("%25.15lf\n", sinx-maku);
    
    } while (i <= n );     

    return 0;
}