#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void busca(char *texto){
	int l,posicao[100],j=0,k=0,pos,i,tam,cont = 0,ocorrencia = 0;
	char palavra[20];
	
	printf("Digite a palavra a ser buscada:\n");
	scanf("%s",palavra);
	
	l = strlen(texto);
	tam = strlen(palavra);
	
	for(i=0;i<l;i++){
		while(j != tam && (palavra[j] == texto[i])){
			if(j == 0){
				pos = i;
			}
			cont++;
			if(j != tam-1) i++;
			j++;
		}

		if(cont == tam){
			posicao[k] = pos+1;
			k++;
			j = 0;
			ocorrencia++;
			cont = 0;
		}
	}

	
	
	for(i=0;i<ocorrencia;i++){
		printf("%d\n",posicao[i]);
	}
}

int main(){
	int i,posicao[20];
	char texto[200];
	
	printf("Digite o texto:\n");
	fflush(stdin);
	scanf("%[^\n]",texto);
	
	busca(texto);
	
	return 0;
	
}
