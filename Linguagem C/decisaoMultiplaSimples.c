/*Decisao multipla simples - switch case*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char ch;
	
	printf("MENU DE ESCOLHAS\n\n");
	printf("1. Opcao A\n");
	printf("2. Opcao B\n\n");
	printf("Entre com a sua escolha: \n\n");
	
	ch = getchar();
	
	switch(ch){
		case '1':
			printf("Opcao 1 foi selecionada\n\n");
			break;
		case '2':
			printf("Opcao 2 foi selecionada\n\n");
			break;
		default:
			printf(">>Nenhuma opcao foi selecionada\n\n");
	}
	system("pause");
}
