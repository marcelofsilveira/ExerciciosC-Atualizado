/*Escreva um programa que gera na tela a tabela ASCII*/

#include<stdio.h>
#include<stdlib.h>

main()

{
	int ascII = 0;
	int decimal = 0;
	
	printf("Gerando tabela ASCII....\n\n");
	
	do {
		printf("(%d, %c)\n", ascII, ascII);
		ascII++;
	} while (ascII <= 255);
	
	system("pause");

}

