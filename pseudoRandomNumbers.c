#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // pseudo random numbers =  A set of values or elements that are statistically random
    //                          ( DON't USE these for any SORT of CRYPTOGRAPHIC SECURITY )


    srand(time(0));                         // s = seed, rand = random, time(0) = current time

    int number1 = (rand() % 6) + 1;           // rand() gives a random number between 0 to 32,767
    int number2 = (rand() % 6) + 1;           // generate a random number 0 to 5 numbers add one =
    int number3 = (rand() % 6) + 1;           // -> random number between 1 and six
    
    printf("%d\n",number1);
    printf("%d\n",number2);
    printf("%d\n",number3);

    return 0;
}