#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char* argv[]){

    if ( argc != 3 ){
        printf("Please input, year day !\n");
        return 1;
    } 
   
    long year = strtol(argv[1],NULL,10);
    long ndays = strtol(argv[2],NULL,10);    
    int day_in_feb = 28; 
    int day_in_year = 365;

    //うるう年をチェックお願い
    if ( ( year % 400 == 0 ) || ( year  % 4 == 0  && year % 100 != 0 ) ){
        day_in_feb = 29;
        day_in_year = 366;
    } 

    //入力したデータをチェック
     if ( ndays > day_in_year ){
        printf("Please inpu day in the range 1 to 366!\n");
        return 1;
    } 

    int month;
    int day = ndays;

    if ( (ndays*12) % day_in_year != 0 ){
        month = ((ndays*12) / day_in_year) + 1;
    }else{
        month = ((ndays*12) / day_in_year);
    }

    int arrmon[12] = {31, day_in_feb, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int monthpos = month-1;      

    if ( month > 1 )
    {
        for ( int i = 0; i < monthpos; i++ )
        {
            day = day - arrmon[i];
        }
        
    } 
      
    printf( "year = %ld\n",year ); 
    printf( "nissu = %d\n", ndays ); 
    printf( "month = %d\n",month ); 
    printf( "day = %d\n",day );          

    return 0;
}
