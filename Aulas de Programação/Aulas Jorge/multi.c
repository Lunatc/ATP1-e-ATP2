//5.Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números maiores do que 0.

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int cont = 0, i=1;
	
	while(cont != 5){
		
		if(i%3 == 0){
			printf("%d\n",i);
			cont++;
			i++;
		}
		else{
			i++;
		}	
	}
	return 0;
}
