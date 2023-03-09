#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void BoyerMoore(char *a,char *b){
	int tama,n,i,k,j,aux=0,l=0;
	int ult[256],pos[100];
	int ocorrencia = 0 ;
	tama = strlen(a);
	n = strlen(b);
	
	for(i=0;i<256;i++){
		ult[i] = -1;
	}
	
	for(i=0;i<tama;i++){
		ult[a[i]] = i;
	}
	
	for(k=tama-1;k<n;k=k+tama-ult[b[k+1]]){
		for(i=tama-1,j=k;i>=0;i--,j--){
			if(i == tama-1 ){
				aux = j - tama;
			}
			if(a[i] != b[j]) break;
		}
		if(i<0) {
			ocorrencia ++;
			pos[l] = aux + 1;
			l++;
		}
	}
	 printf("Numero de ocorrencias:%d",ocorrencia);
	 printf("\nPosicao(s):\n");
	 for(i=0;i<ocorrencia;i++){
	 	printf(" %d \n",pos[i]);
	 }
}

int main(){
	char a[100],b[1000];
	
	printf("Digite o texto:\n");
	scanf("%[^\n]",b);
	printf("Digite a palavra a ser procurada:\n");
	scanf("%s",a);
	
	BoyerMoore(a,b);
	return 0;
}
