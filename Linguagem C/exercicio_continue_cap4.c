/*use o comando "CONTINUE" em um programa de divisão que respeite a restricao de divisao por zero*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int divisor;
	float divisao;
	
	for (divisor = 10; divisor>=0; divisor--)
	{
		if(divisor == 0){
			continue;
		}
		
		divisao = (float)1000 / divisor;
		
		printf("1000 / %d\n", divisor);
		printf("%.2f\n", divisao);
	}
	system("pause");
}
