/*Programa para a primeira potência de 2 maior que 1000*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
	int produto = 2;
		
	while (produto <= 1000)produto = 2 * produto;
	{
		//if(produto >1000)
		printf("%d \n", produto);
				
		produto++;
	}
	return 0;
}
