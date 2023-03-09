//2) Escreva um algoritmo que leia um vetor de 13 elementos, que � o Gabarito de um teste da loteria esportiva, contendo os valores 1(coluna 1), 2 (coluna 2) e 3 (coluna do meio). 
//Leia, a seguir, para cada apostador, o n�mero do seu cart�o e um vetor de Respostas de 13 posi��es. 
//Verifique para cada apostador o n�meros de acertos, comparando o vetor de Gabarito com o vetor de Respostas. 
//Escreva o n�mero do apostador e o n�mero de acertos. Se o apostador tiver 13 acertos, mostrar a mensagem "Ganhador".

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int v1[13],i,j,n,v2[13],numero,acerto;

	printf("Digite os valores do gabarito do teste da loteria esportiva(de 1 a 3):\n");
	for(i=0;i<13;i++){
		scanf("%d",&v1[i]);
		if(v1[i] > 3 || v1[i] <= 0){
			printf("N�o digite valores menores diferentes de 1,2 ou 3!\nDigite novamente:\n");
			scanf("%d",&v1[i]);
		}
	}
	
	printf("\n");

	
	printf("Digite o n�mero de apostadores:");
	scanf("%d",&n);
	
	for(j=0;j<n;j++){
		printf("\n\nDigite o n�mero do apostador:");
		scanf("%d",&numero);
		
		printf("\nDigite a sequ�ncia do apostador:");
		printf("\n");
		for(i=0;i<13;i++){
			scanf("%d",&v2[i]);
			if(v2[i] > 3 || v2[i] <= 0){
			printf("N�o digite valores menores diferentes de 1,2 ou 3!\nDigite novamente:\n");
			scanf("%d",&v2[i]);
		}
		}
		
		for(i=0;i<13;i++){
			if(v1[i] == v2[i]){
				acerto += 1;
			}
		}
		printf("\nO apostador de n�mero %d,acertou %d elementos.",numero,acerto);
		if(acerto == 13) printf("\nO apostador de n�mero %d ganhou!",numero);	
	}

return 0;
}
