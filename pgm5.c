/**********************************************************************
 *                                                                    *
 *       プログラミング演習１                                         *
 *       function  : pgm5       2020/10/28                            *
 *       corrector :              /  /                                *
 *                                                                    *
 **********************************************************************/
#include   <stdio.h>

void reverse( char* );

int main(void)
{
	static  char    s1[] = "abcdefghi";
	static  char    s2[] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	static  char    s3[] = "0987654321";
	static  char    s4[] = "z";

	(void)printf( "  s1[] before calling reserve-function : %s \n",s1);
	(void) reverse(s1);
	(void)printf( "  s1[] after  calling reserve-function : %s \n",s1);

	(void)printf( "\n");
	(void)printf( "  s2[] before calling reserve-function : %s \n",s2);
	(void) reverse(s2);
	(void)printf( "  s2[] after  calling reserve-function : %s \n",s2);

	(void)printf( "\n");
	(void)printf( "  s3[] before calling reserve-function : %s \n",s3);
	(void) reverse(s3);
	(void)printf( "  s3[] after  calling reserve-function : %s \n",s3);

	(void)printf( "\n");
	(void)printf( "  s4[] before calling reserve-function : %s \n",s4);
	(void) reverse(s4);
	(void)printf( "  s4[] after  calling reserve-function : %s \n",s4);
	return 0;

}
