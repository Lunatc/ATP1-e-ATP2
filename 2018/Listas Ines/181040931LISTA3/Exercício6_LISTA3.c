/*Nome:Cíntia Braz Mesquita                                          */
/*RA:181040931                                                       */
/*Exercício-Programa 6 -- Multiplicação de matrizes passado em sala  */
/*Compilador:DevC++ 5.11                                             */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Ler_Matriz(float x[][50],int n,int m,float *p){
	int i,j;
	p=&x[0][0];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Elemento[%d,%d]=",i,j);
			scanf("%f",&*(p+(i*m+j)));
		}
	}
}

void Escreve_Matriz(float x[][50],int n,int m,float *p){
	int i,j;
	p=&x[0][0];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%6.1f",*(p+(i*m+j)));
		}	printf("\n");
	}
}

void Multiplica_Matriz(float x[][50],float y[][50],float z[][50],int n,int m,int l,float *px,float *py,float *pz){
	px = &x[0][0];
	py = &y[0][0];
	pz = &z[0][0];
	
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			z[i][j] = 0;
			for(k=0;k<m;k++){
				*(pz+(i*m+j)) += *(px+(i*m+k)) * (*(py+(k*m+j)));
			}
		}
	}
}

int main(){
	float a[50][50],b[50][50],c[50][50];
	float *p,*px,*py,*pz;
	int m,n,l;

		puts("De o valor inteiro  de m:");
		scanf("%d",&m);
		
		puts("De o valor inteiro  de n:");
		scanf("%d",&n);
		
		puts("De o valor inteiro  de l:");
		scanf("%d",&l);

		puts("Digite a primeira matriz:");

		Ler_Matriz(a,n,m,p);
	
		puts("Digite a segunda matriz:");
	
		Ler_Matriz(b,n,m,p);
		
		printf("Matriz A:\n");
		
		Escreve_Matriz(a,n,m,p);
	
		printf("\n");
		
		printf("Matriz B:\n");
		
		Escreve_Matriz(b,m,l,p);
	
		Multiplica_Matriz(a,b,c,n,m,l,px,py,pz);
	
		puts("Matriz Produto\n");
	
		Escreve_Matriz(c,n,l,p);

	return 0;
}

