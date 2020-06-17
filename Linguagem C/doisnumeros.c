#include <stdio.h>

int num1, num2, soma, produto, quociente, resto;

main() {
	
	printf("Digite dois numeros inteiros: ");
	
	scanf("%d%d", &num1, &num2);
	
	printf("Voce digitou %d e %d\n", num1, num2);
	
	soma = num1 + num2;
	produto = num1 * num2;
	quociente = num1 / num2;
	resto = num1 % num2;
		
	printf("A soma eh %d\n", soma);
	printf("O produto eh %d\n", produto);
	printf("O quociente eh %d\n", quociente);
	printf("O resto eh %d", resto);
	return 0;
}
