/*Exemplo "continue" - força a proxima iteração do laço, pulando o código intermediário*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
	int x;
	for (x = 1; x <= 10; x++){
		if(x == 5){
			continue;
		}
	printf("%d ", x);
	system("pause");
	}
printf("\nUsando o continue para evitar o valor 5\n");
system("pause");

}
