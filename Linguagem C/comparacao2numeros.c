/*comparação entre dois números*/

#include<stdio.h>

main () {
	int num1, num2;
	
	printf("Digite o primeiro numero inteiro: ");
	scanf("%d", &num1);
	
	
	printf("Digite o segundo numero inteiro: ");
	scanf("%d", &num2);
	
	if(num1 > num2)
		printf("O primeiro numero eh maior %d ", num1);
	
	if(num2 > num1)
		printf("O segundo numero eh maior %d ", num2);
	
	if(num1 == num2)
		printf("Estes numeros são iguais! ");	
	
		
	return 0;
}
