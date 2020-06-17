/*Programa de adivinhação*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // para utilizar a funcao rand eh necessario incluir esta biblioteca

main()
{
	int magico;
	int palpite;
	
	srand(time(NULL)); //inicializacao necessaria para a funcao rand.
	magico = rand()%10 + 1;
	//printf("%d ", magico);
	
	printf("Adivinhe o numero magico: ");
	
	scanf("%d", &palpite);
	if(palpite == magico){
		printf("****CERTO****");
		printf("%d eh o numero magico!\n", magico);
	}
	else {
		printf("****ERRADO****");
		if(palpite > magico)
			printf("Muito alto!\n");
		else 
			printf("Muito baixo!\n");
			
	}
	printf("O numero magico eh %.1d\n", magico);
	system("pause");
}
