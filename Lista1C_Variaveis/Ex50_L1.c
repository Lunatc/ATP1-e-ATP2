#include<stdio.h>
#include<stdlib.h>

int main(){
	int idade, ano, ano_nas;
	
	printf("Digite a idade da pessoa:\n");
	scanf("%d",&idade);
	printf("\nDigite o ano atual:\n");
	scanf("%d",&ano);
	
	ano_nas = ano - idade;
	
	printf("\nA pessoa nasceu em:%d",ano_nas);
}
