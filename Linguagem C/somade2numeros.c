#include <stdio.h>
#include <stdlib.h>

main()
{
	int inteiro1, inteiro2, soma;  /*declara��o de vari�veis*/
	
	printf("Digite o primeiro numero: \n"); /*solicita a primeira a��o*/
	scanf("%d", &inteiro1); /*l� a primeira a��o*/
	
	printf("Digite o segundo numero: \n");/*solicita a segunda a��o*/
	scanf("%d", &inteiro2); /*l� a segunda a��o*/
	
	soma = inteiro1 + inteiro2; /*atribui e faz o processamento principal*/
	printf("A soma e %d\n", soma);
	
	return 0;
	
	
}
