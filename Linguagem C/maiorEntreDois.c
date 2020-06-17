#include <stdio.h>

int num1, num2, soma;

main ()
{
	printf("Digite dois numeros inteiros: \n");
	scanf("%d %d", &num1, &num2);
	
	soma = num1 + num2;
	
	if(num1 > num2)
		printf("O primeiro numero %d eh o maior", num1);
	
	if(num2 > num1)
		printf("O segundo numero %d eh o maior", num2);
	
	return 0;
}
