/*Escreva um programa que leia tres numeros do teclado e os imprima
na tela na ordem inversa de entrada*/

#include <stdio.h>

main ()
{
	int num1, num2, num3;
	
	printf("Digite 3 numeros\n");
	scanf("%d  %d  %d", &num1, &num2, &num3);
	
	printf("%d - %d - %d", num3, num2, num1);
	
	return (0);
}
