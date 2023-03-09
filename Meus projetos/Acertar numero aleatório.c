#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int randNumber, x ,cont;
	srand(time(NULL));
	randNumber = rand() %100+1;
	cont=0;
	do { 
		printf("Digite um numero de 1 a 100:\n");	
		scanf("%d",&x);
		if( randNumber < x ) printf("O numero secreto eh menor.\n");
		if( randNumber > x ) printf("O numero secreto eh maior.\n");
        cont=cont+1;
	} while(x != randNumber);
    printf("Voce acertou o numero escolhido :");
	printf("%d",x);
	printf("\nNumero de tentativas:%d",cont);  
	return 0;
}



    

