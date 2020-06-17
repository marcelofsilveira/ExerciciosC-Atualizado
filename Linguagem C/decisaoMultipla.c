/*Escreva um programa em C que apresente um menu
de opcoes para a escolha do time de futebol de alguem*/

#include<stdio.h>
#include<stdlib.h>

main ()
{
	char ch;
	
	printf("MENU DE ESCOLHAS DE TIME DE FUTEBOL\n\n");
	
	printf("1. Time: Flamengo\n\n");
	printf("2. Time: Santos\n\n");
	printf("3. Time: Gremio\n\n");
	printf("4. Time: Ibis\n\n");
	
	printf("Faca a sua escolha\n\n");
	
	ch = getchar();
	
	switch(ch){
		case '1':
			printf(">> Opçao 1 foi selecionada - Flamengo\n\n");
			break;
			
		case '2':
			printf(">> Opçao 2 foi selecionada - Santos\n\n");
			break;
			
		case '3':
			printf(">> Opçao 3 foi selecionada - Gremio\n\n");
			break;
			
		case '4':
			printf(">> Opçao 4 foi selecionada - Ibis\n\n");
			break;
			
		default:
			printf("Nenhuma opcao selecionad\n\n");
	}
	
	system("pause");
}

