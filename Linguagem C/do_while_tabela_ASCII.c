/*Tabela ASCII*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
	int a = 0;
	
	printf("Gerando a tabela ASCII...\n\n");
	
	do 
	{
		printf("(%d, %c) \n", a, a);//imprime os inteiros e o respectivo caractere ASCII
		a++; 
	} while (a <= 255);//enquanto a<=255, o programa continua
	
	system("pause");
}
