/*Escreva um programa de controle de senha que d� 3 chances de acerto 
ao usuario, se ele n�o conseguir, o programa deve avisar que o cart�o foi bloqueado*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
	int senha;
	int contador;
	
	do
	{
		printf("\nDigite a senha: ");
		scanf("%d", &senha);
		
		if(senha == 456){
			printf("\nSenha Correta\n");
		} else{
			printf("\nSenha Incorreta\n");
			printf("\nTente novamente\n");
		}
		
	}while (senha != 456);
	system ("pause");
}

