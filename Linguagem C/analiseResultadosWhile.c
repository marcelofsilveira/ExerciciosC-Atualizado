/*Analise de resultados de exame*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
	/*inicializando variáveis em declarações*/
	int aprovacoes = 0, reprovacoes = 0, aluno = 1, resultado;
	
	/*processamento de 10 alunos: loop controlado por contador*/
	
	while (aluno <= 10) {
		printf("Entre com o resultado (1 = aprovado, 2 = reprovado): ");
		scanf("%d", &resultado);
		if (resultado == 1) /*if/else no interior do while*/
			aprovacoes++;
		else
			reprovacoes = reprovacoes + 1;
			aluno++;
	}
	printf("Aprovados %d\n", aprovacoes);
	printf("Reprovacoes %d\n", reprovacoes);
	if (aprovacoes > 8)
		printf("Cobrar taxa escolar\n");
	else 
		printf("Nao cobrar taxa escolar\n");
			
	return 0;
}
