#include <stdio.h>

int main(){

    int jsossu[] = {2, 3, 5, 7, 11, 13, 17, 19 };
    
    for( int i = 0; i < sizeof(jsossu)/sizeof(jsossu[0]); i++){

        printf("%x ",jsossu[i]);       

    }

    return 0;
}