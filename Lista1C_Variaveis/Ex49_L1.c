#include<stdio.h>
#include<stdlib.h>

int main(){
	int hora_i, min_i,seg_i,duracao, hora_f,min_f,seg_f;
	
	printf("Digite o horario de inicio em horas, minutos e segundos:\n");
	scanf("%d%d%d",&hora_i,&min_i,&seg_i);
	
	printf("Digite a duracao em segundos:\n");
	scanf("%d",&duracao);
	
	hora_f = duracao/3600;
	min_f = duracao%3600;
	seg_f = min_f;
	min_f = min_f/60;
	seg_f = seg_f%60;
	
	
	hora_f = hora_f + hora_i;
	min_f = min_f + min_i;
	seg_f = seg_f + seg_i;



	
	
	
	
	printf("\nO horario de termino eh %d horas %d minutos e %d segundos");
	
}
