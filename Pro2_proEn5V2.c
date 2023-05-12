#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char* argv[]){

    if ( argc != 4 ){
        printf("Please input, year month day !\n");
        return 1;
    }      
 
    long year = strtol(argv[1],NULL,10);
    long month = strtol(argv[2],NULL,10);
    long day = strtol(argv[3],NULL,10); 

    int sumday = day;
    int day_in_feb = 28;    

    //入力したデータをチェック
    
    if ( month > 12 ){
        printf("Please input month in the range 1 to 12!\n");
        return 1;
    }    

    if ( day > 31 ){
        printf("Please input day in the range of the month!\n");
        return 1;
    } 
     
    //うるう年をチェック
    if ( ( year % 400 == 0 ) || ( year  % 4 == 0  && year % 100 != 0 ) ){
        day_in_feb = 29;
    }

    int arrmon[12] = {31, day_in_feb, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int monthpos = month-1;      

    if ( month > 1 )
    {
        for ( int i = 0; i < monthpos; i++ )
        {
            sumday = sumday + arrmon[i];
        }
        
    }     
       
    printf( "year = %ld\n",year );
    printf( "month = %ld\n", month );   
    printf( "day = %ld\n",day);
    printf( "nissu = %d\n", sumday );      

    return 0;
}
