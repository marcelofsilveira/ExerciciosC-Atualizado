/*Escreva um programa que resolva o problema:
Uma copia "xerox" custa R$ 0,25 por folha, mas acima de 100 folhas
esse valor cai para R$ 0,20 por unidade.
Dado o total de copias, informe o valor a ser pago*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
	float quantidade, preco, valor_final;
	
	printf("PRECO COPIA\n\n");
	printf("Ate 100 folhas - unidade R$ 0,25\n");
	printf("Acima de 100 folhas - unidade R$ 0,20\n");
	
	printf("Informe a quantidade de copias: \n");
	scanf("%f", &quantidade);
	
	if (quantidade <= 100){ 
		preco = 0.25;
	}
	else { 
		preco = 0.20;
	}
	
	valor_final = preco * quantidade;
	
	printf("Quantidade %.0f\n", quantidade);
	printf("O preco por unidade eh %.2f\n", preco);
	printf("O valor total eh %.2f\n", valor_final);
	
	
	system("pause");
}
