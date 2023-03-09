/*Nome:Cíntia Braz Mesquita                          			                                             */
/*RA:181040931                                          			                                         */
/*Exercício-Programa 2 -- tempo de processamento dos algoritmos de ordenação                                 */
/*Compilador:DevC++ 5.11                                    		                                         */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>


double tempo(){
	return(double) clock()/CLOCKS_PER_SEC;
}

void GeraVetor(int v[], int n){
	int i;
	for(i=0;i<n;i++)
		v[i]=(double)INT_MAX * rand()/(RAND_MAX + 1.0);	
}

int BubbleSort(int v[], int n){
	int aux,i,j, troca = 0;
	for(i = 0; i < n-1; i++){
		for(j = n-1; j > i; j--){
			if(v[j-1] > v[j]){
				aux = v[j];
				v[j] = v[j-1];
				v[j-1] = aux;
                troca++;
			}
		}
	}
    return troca;
}

void Selecao(int *v, int n){
	int i, j, menor, indice, troca;
	for(i = 0; i < n-1; i++){
		menor = v[i];
		indice = i;
		troca = 0;
		for(j = i+1; j < n; j++){
            if(v[j] < menor){
				menor = v[j];
				indice = j;
				troca = 1;
			}
        }
        if(troca){
			v[indice] = v[i];
			v[i] = menor;
        }
	}
}

int Insercao(int *v,int n){
	int i, j, x, troca = 0;
	for(i = 1; i < n; i++){
		x = v[i];
		for(j = i-1; j >= 0 && v[j] > x; j--){
            v[j+1] = v[j];
            troca++;
        } 
		v[j+1] = x;
	}
    return troca;
}

void Shellsort(int *v,int n){
	int i,j,H,c,x,k;
	int h[100];
	c = Achar_c(n);
	Achar_h(c,h);
	for(k=0;k<c;k++){
		H = h[k];
		for(i=H;i<n;i++){
			x = v[i];
			for(j=i-H;j>=0 && x<v[j];j=j-H){
				v[j+H] = v[j];
			}
			v[j+H] = x;
		}	
	}
}

int f(int i){
	if(i == 1){
		return 1;
	}
	else return (3 * f(i-1)) + 1;
}

int Achar_c(int n){
	int c,x;
	for(x=1;x<n;x++){
		if(f(x) > n){
			c = x-2;
			return c;
		}			
	}
}

void Achar_h(int c,int h[]){
	int j;
	for(j=1;j<=c;j++){
		h[j-1] = (c-j+1);
	}
}

void QuickSort(int *v, int esq, int dir, int *troca){
    int i, j, aux, x;
    i = esq;
    j = dir;
    x = v[(i+j)/2];
    do{
        while(v[i] < x) i++;
        while(v[i] > x) j--;
        if(i < j){
            aux = v[i];
            v[i] =  v[j];
            v[j] = aux;
            troca++;
            i++;
            j--;
        }
        else if(i == j){
            i++;
            j--;
        }
    }while(i <= j);
    if(esq < j) QuickSort(v, esq, j);
    if(i < dir) QuickSort(v, i, dir);
}

void intercala(int *v, int p, int q, int r, int *troca){
    int i, j, k;
    int c[r-p];
    i = p;
    j = q;
    k = 0;
    while(i < q && j < r){
        if(v[i] <= v[j]) c[k++] = v[i++];
        else c[k++] = v[j++];
        troca++;
    }
    while(i < q) c[k++] = v[i++];
    while(j < r) c[k++] = v[j++];
    for(i = 0; i < k; i++) v[i+p] = c[i]; 
}

void MergeSort(int *v, int p, int r, int *troca){
    int q;
    if(p < r-1){
        q = (p +r)/2;
        MergeSort(v, p, q, &troca);
        MergeSort(v, q, r, &troca);
    }
}


int main(){
	int n,i,opcao;
	double duracao,ti,tf,tt;
	
	printf("\n Forneça o tempo maximo que o programa devera executar:");
	scanf("%lf",&duracao);
	printf("\n Duracao dos testes = %.2f segundos\n",duracao);
	printf("\n Escolha o algoritmo a ser utilizado:\n");
	printf("\n Bolha<1>");
	printf("\n Selecao<2>");
	printf("\n Insercao<3>");
	printf("\n Shellsort<4>");
	printf("\n Mergesort<5>");
	printf("\n Quicksort<6>");
	printf("\n Todos os metodos<7>");
	printf("\n");
	scanf("%d",&opcao);
	numero = (double) INT_MAX*rand() / (RAND_MAX +1.0);
	PRINTF("\n Numero a ser procurado:  %.2f\n",numero);
	
	switch(opcao){
		case 1:
			printf("\n Bolha:\n");
	}
}


