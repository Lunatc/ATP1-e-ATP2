#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Boyer_Moore(char *palavra,char *texto){
	int tam,n,k,j,i;
	int digitos[256],pos[100];
	int ocorrencia = 0,aux = 0,l = 0;
	
	tam = strlen(palavra);
	n = strlen(texto);
	
	for(i=0;i<256;i++){
		digitos[i] = -1;
	}
	
	for(i=0;i<tam;i++){
		digitos[palavra[i]] = i;
	}
	
	for(k= tam-1;k<n;k=k+tam-digitos[texto[k+1]]){
		for(i=tam-1,j=k;i>=0;i--,j--){
			if(i == tam-1){
				aux = j-tam;
			}
			if(palavra[i] != texto[j]) break;
		}
		if(i<0){
			ocorrencia++;
			pos[l] = aux + 1;
			l++;
		}
	}
	
	printf("Numero de ocorrencias:%d",ocorrencia);
	printf("\nPosicao(s):\n");
	
	for(i=0;i<ocorrencia;i++) printf(" %d \n",pos[i]);

}

int main(){
	char texto[200],palavra[20];
	
	printf("Digite o texto:\n");
	scanf("%[^\n]",texto);
	
	printf("Digite a palavra:\n");
	scanf("%s",palavra);
	
	Boyer_Moore(palavra,texto);
	return 0;
}
