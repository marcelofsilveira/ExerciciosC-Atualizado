#include <stdio.h>
#include <stdlib.h>


main () {
	
	int num1, num2;
	
	printf("Informados 2 numeros inteiros, lhe direi qual relacionamento satisfazem: \n");
	
	printf("Digite o primeiro numero inteiro: \n");
	scanf("%d", &num1);
	
	printf("Digite o segundo numero inteiro: \n");
	scanf("%d", &num2);
	
	if (num1 == num2)
		printf("%d eh igual a %d\n", num1, num2);
	
	if (num1 != num2)
		printf("%d eh diferente a %d\n", num1, num2);		

	if (num1 < num2)
		printf("%d eh menor a %d\n", num1, num2);
		
	if (num1 > num2)
		printf("%d eh maior a %d\n", num1, num2);
		
	if (num1 <= num2)
		printf("%d eh menor ou igual a %d\n", num1, num2);
		
	if (num1 >= num2)
		printf("%d eh maior ou igual a %d\n", num1, num2);
		
	return 0;
}
