/*Escreva um programa que converta caracteres min�sculos para mai�sculos. Utilizando FOR*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

main ()
{
	char min, mai;
	int cont = 0;
	for (cont=1; cont<=10; cont++)
	{
		min = getchar();
		mai = toupper(min);
		putchar(mai);
	}
system("pause");
	
}

