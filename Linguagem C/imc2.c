#include<stdio.h>
#include<stdlib.h>

main()
{
	float peso, altura, imc;
	
	scanf("%f%f", &peso, &altura);
	
	imc = peso / (altura * altura);
	
	printf("O IMC eh %f.\n", imc);
	
	system("pause");
}
