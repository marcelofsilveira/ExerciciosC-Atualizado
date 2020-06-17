/*Escreva um progrma que receba as notas de um aluno até que
a condicao de saida se confirme e que, em seguida, calcule a media do aluno*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int nota; int cont = 0; int total = 0;
	char letra;
	float media;
	
	do
	{
		printf("Digite uma nota: \n");
		scanf("%d", &nota);
		fflush(stdin);
		cont++;
		total = total + nota;
		printf("Digite uma letra qualquer ou \'q\' para encerrar: \n");
	
	}while (letra=getchar()!= 'q');

	printf("Parando...\n");
	printf("Repeticoes = %d e total das notas = %d.\n", cont, total);
	media = total/cont;
	printf("Media = %f.\n", media);

	system("pause");
}
