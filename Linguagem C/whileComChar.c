/*Escreva um programa que imprima "FATEC" na tela enquanto o caractere "q"
nao for digitado pelo usuario (portanto, condicao de saida com caractere) e 
conte quantas repeticoes foram realizadas*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
	int contador = 0;
	char letra;
	
	printf("Digite uma letra: \n");
	printf("Para parar digite a letra 'q'");
	scanf("%s", &letra);
	
	while (letra = getchar() != 'q')
	{
		printf("FATEC\n");
		fflush(stdin);
		contador++;	
	} 
	
	printf("Parando....\n");
	
	printf("Repeticoes = %d\n", contador);
	
	system("pause");
}
