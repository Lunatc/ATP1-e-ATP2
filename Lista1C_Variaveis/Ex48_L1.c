#include<stdio.h>
#include<stdlib.h>

int main(){
	int seg, h,m;
	
	printf("Digite o numero em segundos:\n");
	scanf("%d",&seg);
	
	h = seg/3600;
	m = seg%3600;
	seg = m;
	m = m/60;
	seg = seg%60;
	
	printf("O numero em horas eh %d, em minutos eh %d e segundos %d",h,m,seg);
}
