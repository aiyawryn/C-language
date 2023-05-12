#include <stdio.h>

void max(int num[], int len){

    for (int i = 1; i < len; i++)
    {
        if (num[0] < num[i])
        {
            num[0] = num[i];
        }         
    }  

    printf("Largest number: %d\n",num[0]);
}

void min(int num[], int len){

    for (int i = 1; i < len; i++)
    {
        if (num[0] > num[i])
        {
            num[0] = num[i];
        }         
    }  
    printf("Smallest number: %d\n",num[0]);

}

void avr(int num[], int len){

    int sum = 0;
    int avr;

    for ( int i = 0; i < len; i++)
    {
        sum = sum + num[i];
    }
    avr = sum/len;
    printf("Average value: %d\n",avr);
}

int main(){

    int len = 10;
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    max(arr,len);    
    min(arr,len);  
    avr(arr,len);
    
    return 0;
}