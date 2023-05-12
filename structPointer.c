#include <stdio.h>

struct abc
{
    int x;
    int y;
};

int main(){

    struct abc a = {0,1};
    struct abc *ptr = &a;

    printf("%d %d", ptr -> x, ptr -> y);

    return 0;
}
