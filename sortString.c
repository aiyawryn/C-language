/*
* C Program to sort characters of a string
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void sortString(char* inputString, char* outputArray);
int main(){
    char inputString[100], outputArray[100];
    printf("Enter a String \n");
    gets(inputString);
    sortString(inputString, outputArray);
    printf("Sorted string \n%s", outputArray);
 
    getch();
    return 0;
}
 
/*
 * Function to sort characters of a string 
 */
void sortString(char* inputString, char* outputArray){
    /* initialize counterArray to 0 */
    int counterArray[256] ={0}, length, counter, index;
    length = strlen(inputString);
    /* Count frequency of characters in input array*/
    for(counter = 0; counter < length; counter++){
        counterArray[inputString[counter]]++;
    }
    /* Populate output array */
    for(counter = 0, index = 0; counter < 256; counter++){
        if(counterArray[counter] != 0){
            while(counterArray[counter] > 0){
                outputArray[index++] = counter;
                counterArray[counter]--;
            }
        }
    }
    outputArray[index] = '\0';
}