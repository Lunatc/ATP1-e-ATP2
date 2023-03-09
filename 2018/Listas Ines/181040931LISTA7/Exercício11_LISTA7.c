/*Nome:Cíntia Braz Mesquita                          		        	       			*/
/*RA:181040931                                                  			 			*/
/*Exercício-Programa 11 -- Conta distintos                                              */
/*Compilador:DevC++ 5.11                                    		        			*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>

 void ContaDistintos(int v[],int n){
 	int i,j,aux = 0,cont;
 	cont = n;
 	for(i=0;i<n;i++){
 		for(j=i+1;j<n;j++){
 			if(v[j] == v[i]){
				aux = v[i];
 				cont--;
			}
			if(v[j] == aux){
				cont--;
			}
		}
	}
	if(cont < 0){
		cont = 0;
	}
	 printf("\nNumero de elementos diferentes:%d",cont);
 }
 
 void Bubblesort(int v[],int n){
	int i,j,aux = 0;
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(v[i] > v[j]){
						aux = v[j];
						v[j] = v[i];
						v[i] = aux;
			}
		}				
	}		
}

 int main(){
	int i,n,v[100];
	srand(time(NULL));
	
	printf("Digite a quantidade de numeros a serem ordenados:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		v[i] = rand()%10;
	}
	printf("Numeros gerados:\n");
	for(i=0;i<n;i++){
		printf("\n%d",v[i]);
	}
	Bubblesort(v,n);
	
	printf("\nApos ordenacao:\n");
	for(i=0;i<n;i++){
		printf("\n%d",v[i]);
	}
	ContaDistintos(v,n);
	return 0;
}
