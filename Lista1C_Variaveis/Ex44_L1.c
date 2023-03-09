#include<stdio.h>
#include<stdlib.h>

int main(){
	float alt_esc, alt_des, n_deg;
	
	printf("Digite a altura da escada:\n");
	scanf("%f",&alt_esc);
	
	printf("\nDigite a altura que deseja alcançar:\n");
	scanf("%f",&alt_des);
	
	n_deg = alt_des/alt_esc;
	
	printf("O numero de degraus eh:%f",n_deg);
}
