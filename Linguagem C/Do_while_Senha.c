/*Escreva um programa que teste a senha de um cliente por 3 vezes
no maximo; se ele errar esse numero de chances, o programa deve avisar
da necessidade de procurar a agencia do banco*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
	int cont=1;
	char senha;
	
	do
	{
		printf("Digite a senha: \n");
		scanf("%c", &senha);
		fflush(stdin);
		cont++;
		
		if (senha == 'f')
		{
			printf("Certa!\n");
			break;
		}
		
		if (cont > 3)
		{
			printf("Senha incorreta - procure a agencia mais proxima.\n");
			system("pause");
			exit(1);
		}
	}while(1); //enquanto for verdade
	system("pause");
}
