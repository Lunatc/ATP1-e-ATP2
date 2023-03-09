/*Nome:Cíntia Braz Mesquita                            */
/*RA:181040931                                         */
/*Exercício-Programa 3 -- Intercalagem de vetores      */
/*Compilador:DevC++ 5.11   	   						   */

#include<stdio.h>
#include<stdlib.h>

void intercalador(int vetor_a[],int vetor_b[],int vetor_c[],int n,int m){
	int i,cont_a = 0,cont_b = 0;
	for(i=0;i<n+m;i++){
		while(cont_a != n && cont_b != m){
			if(i%2 == 0){
				vetor_c[i] = vetor_a[i];
				cont_a++;
			}
			else{
				vetor_c[i] = vetor_b[i];
				cont_b++;
			}
		}
		if(cont_a == n){
			while(cont_b != m){
				vetor_c[i] = vetor_b[i];
				cont_b++;
			}
		}
		else if(cont_b == m){
				while(cont_a != n){
				vetor_c[i] = vetor_a[i];
				cont_a++;
			}
		}
	}

	for(i=0;i<n+m;i++){
		printf("%3d",vetor_c[i]);
	}	
} 

int main(){
	int n,m,i;
	printf("Digite o tamanho do primeiro vetor:");
	scanf("%d",&n);
	printf("\nDigite o tamanho do segundo vetor:");
	scanf("%d",&m);
	
	int vetor_a[100],vetor_b[100],vetor_c[100];
	
	printf("Digite os valores dentro do vetor a:\n");
	for(i=0;i<n;i++){
		scanf("%d",&vetor_a[i]);
	}
	printf("Digite os valores dentro do vetor b:\n");
	for(i=0;i<m;i++){
		scanf("%d",&vetor_b[i]);
	}
	
	intercalador(vetor_a,vetor_b,vetor_c,n,m);

	return 0;
}
