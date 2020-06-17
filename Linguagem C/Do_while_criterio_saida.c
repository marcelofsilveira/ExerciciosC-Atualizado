/*Escreva um programa que repita uma entrada de dados até que determinada
condicao de saida seja atingida e, em seguida, acumule os valores digitados*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int num; int contador = 0; int total = 0;
	char letra;
	
	do //realizar os comandos abaixo
	{
		printf("Digite um numero:\n");
		scanf("%d", &num);
		fflush(stdin);
		contador++;
		total = total + num;
		printf("Digite uma letra:\n");
	}while (letra=getchar() != 'q');
	
	printf("Parando...\n");
	printf("Repeticoes = %d e total = %d\n", contador, total);
	system ("pause");
}


