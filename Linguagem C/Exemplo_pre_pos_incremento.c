/*Exemplo de Pre-incremento e Pos-incremento*/

#include <stdio.h>

main ()
{
	int c;
	c = 5;
	
	printf("%d -", c);
	printf(" %d -", c++); /*pos-incremento*/
	printf(" %d\n\n", c);
	
	c = 5;
	printf("%d -", c);
	printf(" %d -", ++c); /*pre-incremento*/
	printf(" %d\n\n", c);
	
	return 0;
	
}
