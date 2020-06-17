/*Par ou impar*/

#include<stdio.h>

int num;

main () {
	
	printf("Digite um numero e descubra se ele eh PAR ou IMPAR\n");
	
	printf("Digite um numero qualquer: ");
	scanf("%d", &num);
	
	if(num%2 == 0)
		printf("O numero %d eh par ", num);
		
	if(num%2 != 0)
		
		printf("O numero %d eh impar", num);
	
	return 0;
	
}
