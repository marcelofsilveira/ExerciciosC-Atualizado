/*Gerando numeros aleatorios. Com FOR*/
#include <stdio.h>
#include <stdlib.h>

main ()
{
	int num;
	
	printf("Valores de rand \n");
	
	srand(time(NULL));
	for (num=1; num<100; num++)
	{
		printf("%d ", rand() % 100);
	}
	
	system("pause");
}
