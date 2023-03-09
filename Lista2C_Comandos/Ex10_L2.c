#include<stdio.h>
#include<stdlib.h>

int main(){
	float altura, sexo, peso_ideal;
	
	printf("Digite a altura da pessoa:\n");
	scanf("%f",&altura);
	
	printf("Digite o sexo da pessoa:\n1-Feminino    2-Masculino\n");
	scanf("%f",&sexo);
	
	
	if(sexo == 2)
		peso_ideal = (72.7 * altura) - 58;
	else if(sexo == 1)
		peso_ideal = (62.1 * altura) - 44.7;
		
	printf("O peso ideal da pessoa eh:%.2f",peso_ideal);
}
