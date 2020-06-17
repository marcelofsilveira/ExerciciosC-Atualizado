/*Equacao do 2 grau*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main ()
{
	float a, b, c, delta, x1, x2;
	
	printf("\t\tResolucao da Equacao do Segundo Grau");
	
	printf("\n\nInforme o valor de a: ");
	scanf("%f", &a);

	printf("\n\nInforme o valor de b: ");
	scanf("%f", &b);
	
	printf("\n\nInforme o valor de c: ");
	scanf("%f", &c);	
	
	delta = pow(b,2) - 4 * a * c;
	
	if (delta < 0) 
	{
		printf("\nDelta eh igual a %.2f", delta);
		printf("\nDelta negativo, impossivel calcular.\n\n");
	}
	else
	{
		if (delta == 0)
		{printf("Raizes iguais\n");} 
		else 
		printf("Raizes diferentes!\n");
	
	
	x1 = ((-b) + sqrt(delta)) / (2 * a);
	x2 = ((-b) - sqrt(delta)) / (2 * a);
	
	printf("\nx1 = %.2f e x2 = %.2f\n\n", x1, x2);
	
	return (0);
}
}

