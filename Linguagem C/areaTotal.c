/*Programa que informa a area em m� de uma casa*/

#include <stdio.h>

int main ()
{
	int largura, comprimento, area_total;
	
	printf("DESCUBRA A �REA TOTAL DA SUA CASA\n\n");
	printf("Informe a largura: ");
	scanf("%d", &largura);
	printf("Informe o comprimento: ");
	scanf("%d", &comprimento);
	
	area_total = largura * comprimento;
	
	printf("Largura: %d\ncomprimento %d\n\n", largura, comprimento);
	printf("A area total eh: %d", area_total);
		
	return 0;
	
}
