#include <stdio.h>

int fact(int n){
    if (n == 1)
    {
        return 1;
    }   
    
    return n*fact(n-1);  

}

int main(){
   
    for (int i = 1; i <= 10; i++)
    {
        printf("%d! = %d\n",i,fact(i));
    } 

    return 0;
}