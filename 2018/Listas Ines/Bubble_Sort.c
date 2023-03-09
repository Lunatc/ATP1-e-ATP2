#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <locale.h>


void scan_vetor(int Vetor[], int tam){
	
	int i;
		
	for(i=0 ; i<tam ; i++){
		printf("\nV[%i]:",i+1);
		scanf("%i",&Vetor[i]);	
	}	
}

void print_vetor(int Vetor[], int tam){
	
	int i;
	
	printf("\nVetor impresso\n");
	for(i=0 ; i<tam ; i++){
		printf("\nV[%i]: %i",i+1,Vetor[i]);
	}
}

void bubble_sort(int Vetor[], int tam, char opc){
	
	int i,j;
	int aux;
	
	for(i=0 ; i<tam ; i++){
		for(j=i+1 ; j<tam ; j++){
			if(opc == 'c'){
				if(Vetor[i] > Vetor[j]){
					aux = Vetor[i];
					Vetor[i] = Vetor[j];
					Vetor[j] = aux;
				}
			}
			else if(opc == 'd'){
				if(Vetor[i] < Vetor[j]){
					aux = Vetor[i];
					Vetor[i] = Vetor[j];
					Vetor[j] = aux;
				}
			}
		}
	}
}


int main(){
	
	int tam;
	char choice;
	puts("Insira o tamanho do vetor");
	scanf("%i",&tam);
	getchar();	
	puts("Ordenacao (C)rescente ou (D)ecrescente ? ");	
	scanf("%c",&choice);	
	choice = tolower(choice);
	
	
	

	
	int v[tam];
	
	scan_vetor(v,tam);
	bubble_sort(v,tam,choice);
	print_vetor(v,tam);
	
	
}
