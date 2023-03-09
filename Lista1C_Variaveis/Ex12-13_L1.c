#include<stdio.h>
#include<stdlib.h>

int main(){
	float km, ml;
	
	printf("Digite a distancia em milhas:\n");
	scanf("%f",&ml);
	
	km = 1.61 * ml;
	
	printf("\nA distancia em quilometros eh:%f",km);
	
	printf("\nDigite a distancia em quilometros:\n");
	scanf("%f",&km);
	
	ml = km/1.61;
	
	printf("\nA distancia em milhas eh:%f",ml);
	
	
	return 0;
}
