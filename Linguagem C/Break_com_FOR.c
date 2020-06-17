/*Exemplo de utilizacao do BREAK. Com FOR*/
#include <stdio.h>
#include <stdlib.h>

main ()
{
	int x;
	
	for(x = 1; x <= 10; x++){
		if(x == 5){
			break;
		}
	printf("%d", x);	
	}
	printf("\nSaiu do loop quando x == %d\n", x);
	
	system("pause");
}
