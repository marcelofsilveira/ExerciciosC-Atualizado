/*Programa que lê o raio de um circulo e imprima o seu diametro*/

#include<stdio.h>

main (){
	int raio;
	float perim, area, pi;
	pi = 3.14159;
	
	printf("Informe o valor do raio: \n");
	scanf("%d", &raio );
	printf("Valor do raio informado eh: %d\n", raio);
	
	perim = 2 * raio * pi; /*calculo do perimetro*/
	
	area = pi * (raio * raio); /*calculo da area da circunferencia*/
	
	printf("O valor do perimetro eh: %f\n", perim);
	
	printf("O valor da area da circunferencia eh: %f\n", area);
	return 0;
	
}
