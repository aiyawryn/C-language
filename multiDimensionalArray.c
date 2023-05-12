#include <stdio.h>

int main(){

    int arr[2][2] = {{1, 2},
                    {3, 4}};
    
    printf("%p ", arr);
    printf("%p ", *arr); 
    printf("%d\n", **arr); 

    printf("%p ", arr);
    printf("%p ", *((arr)+1)); 
    printf("%d\n", *(*(arr)+1)); 

    printf("%p ", arr+1);
    printf("%p ", *(arr+1)); 
    printf("%d\n", **(arr+1)); 

    printf("%p ", arr+1+1);
    printf("%p ", *((arr+1)+1));   
    printf("%d ", *(*(arr+1)+1));           

    return 0;
}