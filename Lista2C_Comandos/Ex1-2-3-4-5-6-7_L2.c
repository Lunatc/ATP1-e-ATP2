#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	float x, y, raiz;
	
	printf("Digite dois numeros:\n");
	scanf("%f%f",&x,&y);
	
	if(x>y)
		printf("X eh maior\n");
	else if(x<y)
		printf("Y eh maior\n");
	else
		printf("Sao iguais");
		
		
	if(x > 0){
		raiz = sqrt(x);
		printf("A raiz de x eh %f", raiz);
	}
	else
		printf("Numero invalido");
		printf("O numero ao quadrado eh %f",pow(x,2));
	
}
