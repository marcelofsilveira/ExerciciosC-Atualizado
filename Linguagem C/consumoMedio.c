/*Escreva um programa que calcule o consumo medio de um automovel: 
são fornecidos a distancia total percorrida e o total de combustivel gasto*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
	float comb_gasto, dist_perc, cons_medio;
	
	printf("Informe a distancia percorrida: ");
	scanf("%f", &dist_perc);
	
	printf("Informe o combustivel gasto: ");
	scanf("%f", &comb_gasto);
	
	cons_medio = dist_perc / comb_gasto;
	
	printf("O consumo medio foi: %f", cons_medio);
	
}
