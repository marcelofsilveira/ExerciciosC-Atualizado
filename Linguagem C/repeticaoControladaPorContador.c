/*Uma turma de dez alunos fez um teste. Os graus ,(inteiros variando de 0 a 100) do
teste est�o dispon�veis para voc�. Determine a m�dia da turma no teste.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int contador, grau, total, media;
	
	total = 0;
	contador = 1;
	
	while (contador <= 10) {
		printf("Entre com o grau: ");
		scanf("%d", &grau);
		total = total + grau;
		contador++;
	}
	
	media = total / 10;
	printf("A media da turma eh %d\n", media);
	return 0;
	
}
