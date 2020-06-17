/*Escreva um programa que calcule a media aritmetica de
três numeros digitados pelo usuário*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
	int num1, num2, num3;
	float media;
	
	printf("Informe 3 numeros\n");
	printf("Digite o primeiro numero: \n");
	scanf("%d", &num1);
	printf("Digite o segundo numero: \n");
	scanf("%d", &num2);
	printf("Digite o terceiro numero: \n");
	scanf("%d", &num3);
	
	printf("Voce informou os seguintes numeros: \n");
	printf("%d - %d - %d\n", num1, num2, num3);
	
	media = (num1 + num2 + num3) /3;
	
	printf("A media eh %.2f", media);
	
	return(0);
}
