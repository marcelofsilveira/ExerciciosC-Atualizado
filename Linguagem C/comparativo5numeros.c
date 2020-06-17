/*Leia cinco numeros e imprima o maior e o menor inteiro*/

#include<stdio.h>

main () {
	
	int num1, num2, num3, num4, num5;
	
	printf("DIGITE 5 NUMEROS INTEIROS CONFORME ABAIXO: \n");/*informacao principal*/
	
	printf("Digite o primeiro numero: \n");
	scanf("%d", &num1);
	
	printf("Digite o segundo numero: \n");
	scanf("%d", &num2);
	
	printf("Digite o terceiro numero: \n");
	scanf("%d", &num3);
	
	printf("Digite o quarto numero: \n");
	scanf("%d", &num4);
	
	printf("Digite o quinto numero: \n");
	scanf("%d", &num5);
	
	if(num1 > num2) /*Qual o numero maior*/
		if(num1 > num3)
			if(num1 > num4)
				if(num1 > num5)
					printf("O primeiro numero eh o maior %d\n", num1);
	
	if(num2 > num3)
		if(num2 > num4)
			if(num2 > num5)
				if(num2 > num1)
					printf("O segundo numero eh o maior %d\n", num2);				

	if(num3 > num4)
		if(num3 > num5)
			if(num3 > num1)
				if(num3 > num2)
					printf("O terceiro numero eh o maior %d\n", num3);
					
	if(num4 > num5)
		if(num4 > num1)
			if(num4 > num2)
				if(num4 > num3)
					printf("O quarto numero eh o maior %d\n", num4);
					
	if(num5 > num1)
		if(num5 > num2)
			if(num5 > num3)
				if(num5 > num4)
					printf("O quinto numero eh o maior %d\n", num5);

	if(num1 < num2) /*Qual o numero menor*/
		if(num1 < num3)
			if(num1 < num4)
				if(num1 < num5)
					printf("O primeiro numero eh o menor %d\n", num1);
	
	if(num2 < num3)
		if(num2 < num4)
			if(num2 < num5)
				if(num2 < num1)
					printf("O segundo numero eh o menor %d\n", num2);				

	
	if(num3 < num4)
		if(num3 < num5)
			if(num3 < num1)
				if(num3 < num2)
					printf("O terceiro numero eh o menor %d\n", num3);
					
	
	if(num4 < num5)
		if(num4 < num1)
			if(num4 < num2)
				if(num4 < num3)
					printf("O quarto numero eh o menor %d\n", num4);
					
	if(num5 < num1)
		if(num5 < num2)
			if(num5 < num3)
				if(num5 < num4)
					printf("O quinto numero eh o menor %d\n", num5);
	
	return 0;
}
