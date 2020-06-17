/*Escreva um programa que teste 3 vezes uma senha. Utilize FOR*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main ()
{
	char senha[20]; // vetor de caracteres para receber a senha
	int x; // variavel que representa as tentativas
	for (x=1; x<=3; ++x)
	{
		printf("Digite a senha: ");
		gets(senha); //funcao gets() recebe cadeias de caracteres = strings
		
		if(strcmp(senha, "password")==0) //comparando se a senha é correta
		{
			printf("OK!\n");
			system("pause");
			break;
		}
		else
		{
			printf("tente novamente!\n");
			printf("%d tentativas de 3\n", x);
		}
	system("pause");
	}
}
