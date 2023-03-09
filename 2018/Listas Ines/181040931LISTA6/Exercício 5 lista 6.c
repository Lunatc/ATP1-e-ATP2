#include "stdlib.h"
#include "stdio.h"
#include "string.h"

void Remove_Brancos(char *texto){
	int i,j;
	int n;
	 
	n = strlen(texto);
	
	for(i=0;i<=n;i++){
		while(texto[i] == ' ' && (texto[i+1] == ' ' || texto[i+1] == '\0')){
			for(j=i;j<=n;j++)
				texto[j] = texto[j+1];
		}
	}
	
	if(texto[0] == ' '){
		for(j=0;j<=n;j++){
			texto[j] = texto[j+1];
		}
	}
	printf("%s\n",texto);
}

void Posicao(char texto[],char palavra[], int *pos,int *ocorrencia)
{
	int i,j,k,l=0,aux=0,auxo=0;
	int n,tamanho;
	int ult[256];
	
	*ocorrencia = 0;
	
	n = strlen(texto);
	
	tamanho = strlen(palavra);
	
	for(i=0;i<256;i++){
		ult[i] = -1;
	}
	
	for(i=0;i<tamanho;i++){
		ult[palavra[i]] = i;
	}
	
	for(k=tamanho-1;k<n;k=k+tamanho-ult[texto[k+1]]){
		for(i=tamanho-1,j=k;i>=0;i--,j--){
			if(i==tamanho-1){
				aux = j - tamanho;
			}
			if(palavra[i] != texto[j])break;	
		}
		if(i<0){
			*ocorrencia++;
			pos[l] = aux+1;
			l++;
		}
	}
	
	auxo = *ocorrencia;
	printf("%d",auxo);
	printf("Numero de ocorrencias:%d",*ocorrencia);
	 printf("\nPosiçoes:\n");
	 for(i=0;i<auxo;i++){
	 	printf(" %d \n",pos[i]);
	 }
	
}

void Remove_Palavra(char *texto,int pos[],char palavra[],int ocorrencia){
	int i,j,n,nt;
	int tamanho;
	
	tamanho = strlen(palavra);
	n = strlen(texto);
	nt = n - tamanho;
	
	for(j=0;j<ocorrencia;j++){
		for(i=pos[j];i<=nt;i++)
			texto[i] = texto[i+tamanho];
		texto[i+1] = '\0';	
	}
	
	printf("%s\n",texto);
}


void Referencia_Bi(char *nome){
	char conec[12][20]= {" da"," das"," de"," di"," do"," dos"," del"," la"," e"," Junior"," Filho"," Neto"};
	
	RemoverBrancos(nome);
	char aux[100];
	
	int i,v[50],n,tamc,j,tamap, k,l;
	
	for(i=0;i<100;i++)
		aux[i]=' ';
	for(i=0;i<12;i++)
	{
		n = posicao(nome,conec[i],v);
		if(n!=0)
		{
			for(j=0;j<n;j++)
			{
				tamc = strlen(conec[i]);
				remove_palavra(nome,v[j],tamc);
			}
		}
	}
	
}
int main(){
	char texto[200],palavra[20];
	int pos[200],ocorrencia;
	
	printf("Digite o texto a ser utilizado:\n");
	scanf("%[^\n]",texto);

	Remove_Brancos(texto);
	
	printf("\nDigite a palavra a ser procurada:\n");
	scanf("%s",palavra);
	
 	
	Posicao(texto,palavra,pos,&ocorrencia);
	
	Remove_Palavra(texto,pos,palavra,ocorrencia);
}
