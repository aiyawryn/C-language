#include <stdio.h>

void namesort(char *psmeibo, int ikosu){   
    char *set = psmeibo;     
    char tmp;    

    for(int i = 0; i < (16*10); i=i+9){         
        
        for( int j = i+9; j < (16*10); j=j+9)
        {
            if ( *(set+i) > *(set+j) )
            {
                for (int k = 0; k < 16; k++)
                {
                    tmp = *(set+i+k);
                    *(set+i+k) = *(set+j+k); 
                    *(set+j+k) = tmp;
                }        
                  
            }
            else if ( *(set+i) == *(set+j) )
            {
                if (*(set+i+1) > *(set+j+1))
                {
                    for (int k = 0; k < 16; k++)
                    {
                        tmp = *(set+i+k);
                        *(set+i+k) = *(set+j+k); 
                        *(set+j+k) = tmp;
                    } 
                }                
            }                
                      
        }        
    }
    for(int i = 1; i <= ikosu; i++ ){
        for( int j = 0; j <= 16-1; j++){
            if (*set == ' ')
            {
                *set = '_';     
            }      
            set++;            
        }
    }    

}