/*Decisao simples - if*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float media1, media2;
	float media_final;
	
	printf("Informe a media1 do aluno:\n ");
	scanf("%f", &media1);
	
	printf("Informe a media2 do aluno:\n ");
	scanf("%f", &media2);
	
	media_final = (media1 + media2)/2;
	
	printf("A media1 informada foi %.1f\n", media1);
	printf("A media2 informada foi %.1f\n", media2);
	printf("A media final eh: %.1f\n", media_final);

	if(media_final >=6){
		printf("Aluno aprovado\n");
	}
	else {
		printf("Aluno reprovado\n");
	}
	
	return 0;
	
	
}
