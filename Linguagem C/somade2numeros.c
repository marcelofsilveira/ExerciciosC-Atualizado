#include <stdio.h>
#include <stdlib.h>

main()
{
	int inteiro1, inteiro2, soma;  /*declaração de variáveis*/
	
	printf("Digite o primeiro numero: \n"); /*solicita a primeira ação*/
	scanf("%d", &inteiro1); /*lê a primeira ação*/
	
	printf("Digite o segundo numero: \n");/*solicita a segunda ação*/
	scanf("%d", &inteiro2); /*lê a segunda ação*/
	
	soma = inteiro1 + inteiro2; /*atribui e faz o processamento principal*/
	printf("A soma e %d\n", soma);
	
	return 0;
	
	
}
