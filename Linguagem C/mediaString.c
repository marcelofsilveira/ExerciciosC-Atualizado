/*Escreva um programa que leia o nome do aluno e as notas que ele obteve
nas tres provas do semestre.
No final, o programa deve informar o nome do aluno e a sua media(aritmetica)*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
	float nota1, nota2, nota3, media;
	char nome[10];
	
	printf("Informe o nome do aluno: ");
	scanf("%s", &nome);
	
	printf("Informe a nota da 1 prova: \n");
	scanf("%f", &nota1);

	printf("Informe a nota da 2 prova: \n");
	scanf("%f", &nota2);

	printf("Informe a nota da 3 prova: \n");
	scanf("%f", &nota3);	
	
	media = (nota1 + nota2 + nota3) / 3;
	
	printf("O aluno de nome %s obteve a media %.2f\n", nome, media);
		
	
	return (0);
}
