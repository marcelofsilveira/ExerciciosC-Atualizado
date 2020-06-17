/*comparação entre 3 numeros*/

#include <stdio.h>


main () {

	int num1, num2, num3, soma, media, produto;
	
	printf("Por favor, digite 3 numeros conforme solicitação do sistema\n");
	
	printf("Digite o primeiro numero: ");
	scanf("%d.1\n", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%d.1\n", &num2);
	
	printf("Digite o terceiro numero: ");
	scanf("%d.1\n", &num3);
	
	printf("Voce digitou %d, %d, %d\n", num1, num2, num3);
	
	//soma = num1 + num2 + num3;
	//media = (num1 + num2 + num3)/3;
	//produto = num1 * num2 * num3;
	
	if(num1 < num2)/*Verificaçao do menor numero*/
		if(num1 < num3)
			printf("O primeiro numero eh o menor %d\n", num1);
	
	if(num2 < num3)
		if(num2 < num1)
			printf("O segundo numero eh o menor %d\n", num2);
	
	if(num3 < num1)
		if(num3 < num2)
		printf("O terceiro numero eh o menor %d\n", num3);

	if(num1 > num2)/*Verificação do maior numero*/
		if(num1 > num3)
			printf("O primeiro numero eh o maior %d\n", num1);
	
	if(num2 > num3)
		if(num2 > num1)
		printf("O segundo numero eh o maior %d\n", num2);
	
	if(num3 > num1)
		if(num3 > num2)
		printf("O terceiro numero eh o maior %d\n", num3);		
	
	system("pause");
	return 0;
}
