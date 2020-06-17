/*Calcula o IMC*/

#include<stdio.h>
#include<stdlib.h>

float IMC, peso, altura;

main()
{
	printf("Informe o seu peso: ");
	scanf("%f", &peso);
	
	printf("Informe a sua altura: ");
	scanf("%f", &altura);
	printf("\n");
	
	IMC = peso / (altura * altura);
	
	printf("Peso informado: %.2f\n\n", peso);
	printf("Altura informada: %.2f\n\n", altura);
	printf("O seu IMC eh: %.2f\n\n", IMC);
	
	if(IMC < 17)
		printf("Voce esta Muito abaixo do peso.\n");
	
	if(17 < IMC <= 18.49)
		printf("Voce esta Abaixo do peso.\n");
	
	if(18.50 >= IMC <= 24.99)
		printf("Voce esta Peso Normal.\n");
	
	system("pause");
}



