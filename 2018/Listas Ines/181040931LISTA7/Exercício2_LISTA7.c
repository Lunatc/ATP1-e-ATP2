/*Nome:Cíntia Braz Mesquita                      			    */
/*RA:181040931                                        			*/
/*Exercício-Programa 2 -- Busca binaria                         */
/*Compilador:DevC++ 5.11                                		*/

#include<stdio.h>
#include<stdlib.h>

int Busca_Binaria(int v[],int n,int x){
	int e,d,m;
	e = 0;
	d = n-1;
	while(e<=d){
		m = (e+d)/2;
		if(v[m] == x) return m+1;
		else if(x<v[m]) d = m-1;
		else e = m+1;
	}
	return -1;
}

int Busca_BinariaR(int v[],int n,int x,int inicio,int fim){
	int meio;
	meio = (inicio + fim)/2;
	if(v[meio] == x) return meio;
	else if(v[meio] > x) fim = meio-1;
	else inicio = meio + 1; 
}



int main(){
	int v[100],n,x,i;
	int inicio,fim;
	
	printf("Digite a quantidade de elementos do vetor:\n");
	scanf("%d",&n);
	printf("Digite a os valores ordenados do vetor:\n");
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	printf("Digite o valor a ser procurado:\n");
	scanf("%d",&x);
	
	inicio = 0;
	fim = n-1;
	
	printf("Posicao:%d",Busca_BinariaR(v,n,x,inicio,fim));
	return 0;
}
