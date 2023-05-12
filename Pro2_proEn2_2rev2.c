#include <stdio.h>
#include <stdlib.h>

#define NAMELNG 16
#define NAMECNT 10

void namesort(char *psmeibo, int ikosu);

int main(){

    FILE *fp = fopen("namefile","r");
    char name[NAMECNT][NAMELNG];

    int i = 0;
    while( fread(&name[i],sizeof(char),NAMELNG,fp) )
    {
        /*if (name[i] == " ")   入れても、終端はまだ、入ってる！
        {
            fclose(fp);
        } */       
        i++;
    }
    fclose(fp);

    printf("i : %d\n",i);

    char *pcw;
    pcw =(char *)name;  

    namesort(pcw,i);
    for (int j = 0; j < i; j++)
    {
        printf("%s\n",name[j]);
    } 

    return 0;
}

void namesort(char *psmeibo , int ikosu){  
   char *set = psmeibo;     
    char tmp;    

    for(int i = 0; i < (NAMELNG*NAMECNT); i=i+NAMELNG){         
        
        for( int j = i+NAMELNG; j < (NAMELNG*NAMECNT); j=j+NAMELNG)
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

