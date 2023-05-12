#include <stdio.h>

unsigned long long int fact(int n){

    unsigned long long int ans = 1;
    for( int j = 1; j <= n; j++ ){
        ans = ans*j;
    }
    return ans;

}

int main(){
   
    for (int i = 1; i <= 20; i++)
    {
        printf("%d! = %llu\n",i,fact(i));
    } 

    return 0;
}