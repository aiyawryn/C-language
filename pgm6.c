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
