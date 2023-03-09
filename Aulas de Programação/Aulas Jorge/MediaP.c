#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	float trab, prova, exame, media;
	
	printf("Digite a nota do trabalho:\n");
	scanf("%f",&trab);
	if(trab > 10){
		printf("Nota invalida");
		return 0;	
	}
	
	printf("Digite a nota da prova:\n");
	scanf("%f",&prova);
	if(prova > 10){
		printf("Nota invalida");
		return 0;
	}
	
	printf("Digite a nota do exame:\n");
	scanf("%f",&exame);
	if(exame > 10){
		printf("Nota invalida");
		return 0;
	}
	
	media = ((trab * 2) + (prova * 3) + (exame*5))/10;
	printf("A media eh: %f",media);
	
	if( media >= 0 && media <= 2.9){
		printf("O aluno esta reprovado");
	}
	else if( media >= 3 && media <= 4.9){
		printf("O aluno esta de recuperacao");
	}
	else
		printf("O aluno foi aprovado");	
	
}
