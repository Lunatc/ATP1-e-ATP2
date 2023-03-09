#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int v[],int n){
	int i,j,aux;
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(v[j] < v[i]){
				aux = v[j];
				v[j] = v[i];
				v[i] = aux;
			}
		}
	}
}

void shell_sort(int v[],int n){
	int i,j,k,aux = 0;
	
	for(i=n/2;i>0;i=i/2){
		for(j=i;j<n;j++){
			for(k=j-i;k>=0;k=k-i){
				if(v[k] <= v[k+1])	break;

				else{
					aux = v[k];
					v[k] = v[k+1];
					v[k+1] = aux;
				}
			}
		}
	}
	
}

void insercao(int v[],int n){
	int i,j,x;
	
	for(i=1;i<n;i++){
		x = v[i];
		j = i - 1;
		while(j >=0 && v[j] > x){
			v[j + 1] = v[j];
			j--;
		}
		v[j+1] = x;
	}
}

void selection_sort(int v[],int n){
	int i,j,aux,min;
	
	for(i=0;i<n-1;i++){
		min = i;
		for(j=i+1;j<n;j++){
			if(v[j] < v[min]){
				min = j;
			}
		}
		if(v[i] != v[min]){
			aux = v[i];
			v[i] = v[min];
			v[min] = aux;
		}
	}
}

void quick_sort(int v[],int inicio,int final){
	
	int i,j,x,aux=0;
	
	i = inicio;
	j = final;
	x = v[(inicio+final)/2];
	
	do{
		while(v[i] < x) i++;
		while(v[j] > x) j--;
		if(i<=j){
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i++;
			j--;
		}
	}while(i<=j);
	
	if(j > inicio) quick_sort(v,inicio,j);
	else if(i < final) quick_sort(v,i,final);
}


int main(){
	int v[20],n,i,inicio,final;
	
	printf("Digite o tamanho do vetor:\n");
	scanf("%d",&n);
	
	printf("Digite os valores do vetor:\n");
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	
	inicio = 0;
	final = n-1;
	
	quick_sort(v,inicio,final);
	
	for(i=0;i<n;i++){
		printf("\n%d",v[i]);	
	}	

	return 0;	
}
