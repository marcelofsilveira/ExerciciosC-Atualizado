/*Escreva um programa de controle de senha que dê 3 chances de acerto 
ao usuario, se ele não conseguir, o programa deve avisar que o cartão foi bloqueado*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
	int senha;
	int contador;

	for (contador = 1; contador <=3; contador++)
	{
		printf("\nDigite a senha: ");
		scanf("%d", &senha);
	
		
		if(senha == 456)
		{
			printf("\nSenha Correta\n");
			system ("pause");
			break;
		}
		else
		{
			printf("\nSenha Incorreta");
			printf("\n%d tentativas de 3\n", contador);
			
			if(contador <= 2)
				printf("\nTente Novamente!!\n");
			else
				printf("\nCartao bloquedo\n");
		}
 	}
 		
 	system("pause");
}
