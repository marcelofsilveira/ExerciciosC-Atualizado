/*Programa que informa a area em m² de uma casa*/

#include <stdio.h>

int main ()
{
	int largura, comprimento, area_total;
	
	printf("DESCUBRA A ÁREA TOTAL DA SUA CASA\n\n");
	printf("Informe a largura: ");
	scanf("%d", &largura);
	printf("Informe o comprimento: ");
	scanf("%d", &comprimento);
	
	area_total = largura * comprimento;
	
	printf("Largura: %d\ncomprimento %d\n\n", largura, comprimento);
	printf("A area total eh: %d", area_total);
		
	return 0;
	
}
