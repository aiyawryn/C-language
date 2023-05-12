#include <stdio.h>

int main(){

    int arr[2][2][2] = {{{1, 2}, {3, 4}},
                        {{5, 6}, {7, 8}}};
        

    printf("%p ", arr);
    printf("%p ", *arr);
    printf("%p ", **arr);
    printf("%d \n", ***arr);

    printf("%p ", arr);
    printf("%p ", (*arr)+1);
    printf("%p ", *(*arr)+1);
    printf("%d \n", **(*arr)+1);

    printf("----------------\n");

    printf("%p ", arr);
    printf("%p ", ((*arr)+1));
    printf("%p ", *((*arr)+1));
    printf("%d \n", **((*arr)+1));

    printf("%p ", arr);
    printf("%p ", ((*arr)+1)+1);
    printf("%p ", *((*arr)+1)+1);
    printf("%d \n", **((*arr)+1)+1);

    printf("----------------\n");    

    printf("%p ", arr+1);
    printf("%p ", *(arr+1));
    printf("%p ", **(arr+1));
    printf("%d \n", ***(arr+1));       

    printf("%p ", arr+1);
    printf("%p ", *((arr+1)+1));
    printf("%p ", **(arr+1)+1);
    printf("%d \n", ***(arr+1)+1);  

    printf("----------------\n");

    printf("%p ", arr+1);
    printf("%p ", *((arr+1)+2));
    printf("%p ", **(arr+1)+2);
    printf("%d \n", ***(arr+1)+2); 

    printf("%p ", arr+1);
    printf("%p ", *((arr+1)+3));
    printf("%p ", **(arr+1)+3);
    printf("%d \n", ***(arr+1)+3);

    return 0;
}