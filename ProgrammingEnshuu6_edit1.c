/**********************************************************************
 *                                                                    *
 *       プログラミング演習１                                         *
 *       function  : pgm6       2020/10/28                            *
 *       corrector :              /  /                                *
 *                                                                    *
 **********************************************************************/
#include   <stdio.h>

#define    NAMELNG  9 
#define    NAMECNT  7 

    static  char    meibo[NAMECNT][NAMELNG] = {
        "SAZAE   ",
        "WAKAME  ",
        "MASUO   ",
        "NORISUKE",
        "TARACHAN",
        "KATSUO  ",
        "NAMIHEI "
    };

void namesort(char *, int);
void namesort(char *psmeibo, int ikosu){   
    char *set = psmeibo;     
    char tmp;    

    for(int i = 0; i < (NAMELNG*NAMECNT); i=i+9){         
        
        for( int j = i+9; j < (NAMELNG*NAMECNT); j=j+9)
        {
            if ( *(set+i) > *(set+j) )
            {
                for (int k = 0; k < NAMELNG; k++)
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
                    for (int k = 0; k < NAMELNG; k++)
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
        for( int j = 0; j <= NAMELNG-1; j++){
            if (*set == ' ')
            {
                *set = '_';     
            }      
            set++;            
        }
    }    

}

int main(void)
{
    int  i;
    char *pcw;


    (void)printf("****  Before calling namesort  ****\n");
    (void)printf("    name  \n");
    for ( i=0 ; i < NAMECNT ; i++ ) 
   {        
        (void)printf("    %-12s\n",meibo[i]); 
    }

	pcw = (char *)meibo;
    namesort( pcw, NAMECNT );          /* name-sorting function   */

    (void)printf("\n****  After calling namesort  ****\n");
    (void)printf("    name  \n");
    for ( i=0 ; i < NAMECNT ; i++ )
    {

        (void)printf("    %-12s\n",meibo[i]);
    }    
	return 0;
}
