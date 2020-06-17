/*Escreva um programa que simule uma conta bancaria*/
#include <stdio.h>
#include <stdlib.h>

main ()
{
	float saldo = 1000.00, valor;
	int transacao;
	
	do 
	{
		printf("\n1. Deposito");
		printf("\n2. Saque");
		printf("\n3. Saldo");
		printf("\n4. Sair");
		printf("\n Opcao?: ");
		scanf("%d", &transacao);
		
		switch(transacao)
		{
			case 1: printf("\nValor do deposito?\n");
			scanf("%f", &valor);
			saldo = saldo + valor;
			break;
			
			case 2: printf("\nValor do saque?\n");
			scanf("%f", &valor);
			saldo = saldo - valor;
			break;
			
			case 3: printf("\nSaldo atual = R$ %.2f\n", saldo);
			break;
			default: if(transacao != 4) printf("\nOpcao invalida!\n");						
		}
		
	} while (transacao != 4);
	printf("Fim das transacoes \n\n");
	system("pause");
		
}
