/*Escreva um programa que leia 5 valores e conte quantos desses valores são negativos, 
mostrando essa informação no final*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	
	int contador; 
	int total = 0;
	char letra;
	int numero;
	
	for (contador=1; contador<=5; ++contador)
	{
		while(letra=getchar()!='q')
	{
		printf("Digite um numero (+ ou -): ");
		scanf("%d", &numero);
		fflush(stdin); //funcao que le o caractere. relacionado ao getchar
		contador++;
		if (numero < 0)
		{
			total = total + numero;
		}
	}
		printf("Parando....\n");
		printf("Repeticoes = %d e total = %d.\n", contador, total);	
	}
	system ("pause");
}
