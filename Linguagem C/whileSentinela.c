/*Desenvolva um programa para calcular a média de uma turma que processe um número
arbitrário de "notas" cada vez que o programa for executado*/
#include <stdio.h>

main()
{
	float media;
	int contador, nota_aluno, total;
	
	/*fase de inicialização*/
	total = 0; contador = 0;
	
	/*fase de processamento*/
	printf("Entre com a nota do aluno (-1 para finalizar a entrada de dados): ");
	scanf("%d", &nota_aluno);
	while (nota_aluno != -1) {
		total = total + nota_aluno;
		contador++;
		printf("Entre com a nota do aluno (-1 para finalizar): ");
		scanf("%d", &nota_aluno);
	}
	
	/*fase de terminação*/
	if (contador != 0) {
		media = (float) total / contador;
		printf("A media da turma eh %.2f\n", media);
		printf("Foram informadas %d notas de alunos", contador);
	} else
		printf("Nenhuma nota foi fornecida\n");
		
	return 0;
	
}
