#include <stdio.h>

int main(){

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("item1 : %f\t",item1);
    printf("item1 : %.2f\n",item1);
    printf("item2 : %f\t",item2);
    printf("item2 : %.2f\n",item2);
    printf("item3 : %f\t",item3);
    printf("item3 : %.2f\n",item3);

    printf("item1 : $%8.2f\n",item1);
    printf("item2 : $%8.2f\n",item2);
    printf("item3 : $%8.2f\n",item3);

    printf("item1 : $%-8.2f\n",item1);
    printf("item2 : $%-8.2f\n",item2);
    printf("item3 : $%-8.2f\n",item3);



    return 0;
}