#include<stdio.h>
#include<stdlib.h>

int main(){
	float nota1=0, nota2=0, media;
	
	printf("Digite a nota 1 do aluno:\n");
	scanf("%f",&nota1);
	
	if(nota1 < 0 || nota1 > 10){
		printf("Nota invalida");
		return 0;	
	}
		
	printf("Digite a nota 2 do aluno:\n");
	scanf("%f",&nota2);	
	
	if(nota2 < 0 || nota2 > 10){
		printf("Nota invalida");
		return 0;
	}
	
	media = (nota1 + nota2)/2;
	
	printf("A media eh: %.2f",media);
	
}
