#include <stdio.h>

int main(){ 
    
    int flag = 0;
    int limit = 100;

    for (int i = 2; i <= limit; i++)
    {
        for (int j = 2; j < i ; j++)        //素数かどうかの判定は、中央値までで十分です。
                                            //もちろん今の実装でも結果は同じなので、参考にしてもらえればOKです。
        {
           if( i % j == 0 ){
            flag = 1;
           } 
        }

        if ( flag == 0){
            printf("%d ", i);
        }
        flag = 0;           //flagをリセット       
    } 

    return 0;
}