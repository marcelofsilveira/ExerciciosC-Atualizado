/*Escreva um programa de repetico que assuma uma condicao de saida
com caractere e acumule os valores inseridos em cada iteracao da repeticao*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int numero;
	int contador = 0;
	int total = 0;
	char letra;
	
	while (letra=getchar()!= 'q')
	{
		printf("Digite um numero:\n");
		scanf("%d", &numero);
		fflush(stdin); /*funcao que le o caractere - relacionada ao getchar()*/
		contador++;
		total = total + numero;
	}
	
	printf("Parando....\n");
	printf("Repeticoes = %d e total = %d.\n", contador, total);
	
	system ("pause");
	
}

