/*Escreva um programa que apresente uma contagem
regressiva de 10 a 0*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
	int contador = 10;
	
	while (contador >= 0)
	{
		printf("%d\n", contador);
		contador--;
	}
	
}
