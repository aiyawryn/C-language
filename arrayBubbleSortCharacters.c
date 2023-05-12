#include <stdio.h>

void sort(char array[], int size){

    for(int i = 0; i < size - 1; i++ ){

        for ( int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                int tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }            
        }
    }
}

void printArray(char array[], int size){

    for (int i = 0; i < size; i++)
    {
        printf("%c ", array[i]);
    }
       

}

int main(){

    char array[] = {'F','A','D','B','C','E'};

    int size = sizeof(array)/sizeof(array[0]);
    printf("size of array = %d\n",sizeof(array));
    printf("size of a character = %d\n",sizeof(array[0]));
    printf("size = %d\n",size); 

    sort(array, size);
    printArray(array, size);

    return 0;
}