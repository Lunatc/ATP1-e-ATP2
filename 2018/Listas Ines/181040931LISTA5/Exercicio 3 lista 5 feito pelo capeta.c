#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void verificadora(char numero[]){
	int n,i,j,algarismo,peso,soma = 0,encontrado,verificador,aux2;
	char aux[20];
	
	n = strlen(numero);
	
	strncpy(aux,numero,n-2);
	aux2 = numero;
	peso = n + 1;
	
	for(i=0;i<n;i++){
		algarismo = aux2/(pow(10, n-1));
		aux2 = aux2%(pow(10, n-1));
		soma += algarismo * peso;
		peso--;
		n--;
	}
	
	encontrado = 11 - (soma%11);
	for(i = 0;i<n;i++){
		if(strcmp(numero,"-") == 0){
			verificador = numero[i];
		}
	}
	
	if(encontrado == verificador){
		printf("O digito verificador esta correto.");
	}
	else printf("Digito incorreto");
	
}

int main(){
	char numero[100];
	
	printf("Digite a sequencia de numeros com o digito verificador separado por um (-):\n)");
	scanf("%s",numero);
	
	verificadora(numero);
	
	return 0;
	
}
