/*gerador de numeros aleatorios
usando a funcao rand*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>/*necessaria para usar a funcao rand*/
#include <time.h> /*necessaria para usar a funcao time*/

int main (void)
{
	int num_aleat;
	
	
	printf("Gerando 10 valores aleatorios\n\n");
	
	/* srand(time(NULL)) objetiva inicializar o gerador
	   de numeros aleatorios com o valor da funcao
	   time(NULL). Este valor eh calculado como sendo o totl de segundos
	   passados desde 1 de janeiro de 1970 ate a data atual.
	   Desta forma a cada execucao o valor da "semente" sera diferente
	*/
		
	
	srand(time(NULL));
	
	for(num_aleat = 0; num_aleat < 10; num_aleat++)
	{
		/*gerando valores aleatorios entre zero e 100 */
		printf("%d ", rand() % 100);
		
	}
	
	
	
	getch();
	return 0;
}
