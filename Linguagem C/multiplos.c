/*Saber se o primeiro eh multiplo do segundo*/

#include<stdio.h>

int num1, num2;

main()
{
	printf("INFORME DOIS NUMEROS INTEIROS\n");
	
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &num1);
		
	printf("\nDigite o segundo numero: ");
	scanf("%d", &num2);
	
	printf("\nVoce digitou %d e %d\n", num1, num2);
	
	if(num1%num2 == 0)
		printf("%d eh multiplo de %d", num1, num2);
	
	if(num1%num2 != 0)
		printf("%d nao eh multiplo de %d", num1, num2);
		
	return 0;
}
