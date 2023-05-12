#include <stdio.h>
#include <string.h>

int main(){

    int count = 0;
    int countA = 0;
    int countB = 0;
    int countC = 0;

    char words[100];

    printf("Enter the words: ");
    fgets(words,100,stdin);
    words[strlen(words)-1] = '\0';    
    
    printf("%d\n",strlen(words));
    printf("%d\n",sizeof(words));
    printf("%c\n",words[strlen(words)-1]);

    for (int i = 0; i <= strlen(words); i++)
    {
        if (words[i]=='a' || words[i]=='A')
        {
            countA++;
        }
        else if(words[i]=='b' || words[i]=='B')
        {
            countB++;
        }
        else if(words[i]=='c' || words[i]=='C')
        {
            countC++;
        }
        else
        {
            count++; 
        }
               
    }
    printf("A = %d\n",countA);
    printf("B = %d\n",countB);
    printf("C = %d\n",countC);
    printf("count = %d\n",count);

    return 0;

}