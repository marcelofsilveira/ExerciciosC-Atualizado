/*Programa de adivinhacao. Utiliza funcao rand. Com FOR*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main ()
{
	int iSecret, iGuess;
	
	srand(time(NULL)); //inicializando semente randomica
	
	//gerando numero secreto
	iSecret = rand()%10 + 1; //rand() gera numero aleatorio entre 0 e RAND MAX, no caso 10.
	
	do
	{
		printf("Adivinhe o numero (1 a 10): ");
		scanf("%d", &iGuess);
		
		if(iSecret < iGuess)
		puts("O numero secreto eh menor!");
		
		else
			if(iSecret > iGuess) 
			puts ("O numero secreto eh maior!");
	} while (iSecret != iGuess);

puts("Certo!");
system("pause");
	
}
