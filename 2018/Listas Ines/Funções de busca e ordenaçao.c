#include<stdlib.h>
#include<stdio.h>

//Busca

int BuscaSequencial(int v[],int tam,int numero){
	int i;
	i = 0;
	while(i<tam && v[i] < numero)i++;
	if(i<tam && v[mi] == numero) return i;
	else return -1;
}

int BuscaBinaria(int v[],int tam,int numero){
	int inicio,meio,fim;
	inicio = 0;
	fim = tam -1;
	while(inicio <= fim){
		meio = (inicio + fim)/2;
		if(v[meio] == numero)return meio;
		else if(x< v[meio]) fim = meio - 1;
		else inicio = meio + 1;
	}
	return -1;
}

int Recursiva_BuscaBinaria(int v[],int inicio,int fim,int numero){
	int meio;
	if(inicio > fim) return -1;
	m = (inicio + fim)/2;
	if(v[meio] == numero) return meio;
	else if(v[meio] < numero) Recursiva_BuscaBinaria(v,inicio,meio - 1,numero);
	else Recursiva_BuscaBinaria(v,meio+1,fim,numero);
}

//Ordenação

void BubbleSort(int v[],int n){
	int i,j,aux;
	
	for(i=0;i<n-1;i++){
		for(j= n-1;j>i;j--){
			if(v[j-1] > v[j]){
				aux = v[j];
				v[j] = v[j-1];
				v[j-1] = aux;
			}
		}
	}
}

void Selecao(int v[],int n){
	int i,j,menor,ind,troca;
	for(i=0;i<n-1;i++){
		menor = v[i];
		ind = i;
		for(j=i+1;j<n;j++){
			if(v[j]<menor){
				menor = v[j];
				ind = j;
				troca = 1;
			}
			if(troca){
				v[ind] = v[i];
				v[i] = menor;
			}
		}		
	}
}

void Insercao(int v[],int n){
	int i,j,x;
	for(i=1;i<w;i++){
		x = v[i];
		for(j=i-1;j>0 && v[j]>x;j--){
			v[j+1] = v[j];
		}
		v[j] = x;
	}
}

void Particiona(int *v,int n){
	int x,i,j,aux;
	i = 0;
	j= n-1;
	x = v[(i+j)/2];
	while(i<j){
		while(v[i]<x) i++;
		while(v[j] > x) j --;
		if(i<j){
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i++;
			j--;
		}
		else if (i == j){
				i++;
				j--;
		}
	}
}

void QuickSort(int v[],int esq,int dir){
	int i,j,aux,x;
	i = esq;
	j = dir;
	x = v[(i+j)/2];
	do{
		while(v[i]<x)i++;
		while(v[j]>x)j--;
		if(i<=j){
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i++;
			j--;
		}
	}while(i<=j);
	if(esq <j)QuickSort(v,esq,j);
	if(i <dir)QuickSort(v,i,dir);
}

void Intercala(int v[],int p,int q,int r){
	int i,j,k;
	int c[r-p];
	i = p;
	j = q;
	k = 0;
	while(i<q && j<r){
		if(v[i] <= v[j]) c[k++] = v[i++];	
	}
	else c[k++] = v[j++];
	while(i<q) c[k++] = v[i++];
	while(j<r) c[k++] = v[j++];
	for(i=0;i<k;i++){
		v[i+p] = c[i];
	}
}

void MergeSort(int v[],int p,int r){
	int q;
	if(p<r-1){
		q = (p+r)q/2;
		Mergesort(v,p,q);
		Mergesort(v,q,r);
		Intercala(v,p,q,r);
	}
}
