/*Escreva um programa que informa a categoria de um jogador de futebol,
considerando sua idade: infantil(ate 13 anos); juvenil(ate 17 anos) ou
senior(acima de 17 anos)*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
	int categoria, idade;
	
	printf("DEFINICAO DE CATEGORIA DE ATLETAS\n\n");
	printf("Informe a sua idade: ");
	scanf("%d", &idade);
	printf("A idade informada foi: %d anos\n\n", idade);
	
	if (idade > 17){
		printf("Voce pertence a categoria senior\n");
	} else {
		if (idade <= 13) 
			printf("Voce pertence a categoria infantil\n");	
	
		if (idade > 13)
			printf("Voce pertence a categoria juvenil\n");	
	}
	
	
	return(0);
	
}
