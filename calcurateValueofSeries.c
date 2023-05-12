#include <stdio.h>
#include <math.h>

/*
C Program and flowchart for given series. 
sin x = x −  x^3/3! + x^5/5! − x^7/7! + . . . . . . .  x^n/n! 
where,  x : angle in radian
*/

int main(){

    int n,fact=1,i,sign=-1,c=2;
    float sum,x;

    printf("*** Series Calculator ***\n");
    printf("Value of n: ");
    scanf("%d",&n);
    printf("Angle in degree: ");
    scanf("%f", &x);
    
    x = x*3.14/180;
    sum = x;

    printf("Angle in Radian = %f\n",x);

    printf("sin (%f) = (%f)",x,x);   

    for ( i = 3; i <= n; i+=2, c++ )
    {
        fact = fact * i * ( i - 1 );
        sum = sum + sign * pow(x,i)/fact;
        sign = sign * -1;
        if(c%2==0)
            printf("-");
        else
            printf("+");

        printf("(%f/%d!)",pow(x,i),i);  
    }
    printf("=%.4f",sum);
    printf("\n\n");

    return 0;
}