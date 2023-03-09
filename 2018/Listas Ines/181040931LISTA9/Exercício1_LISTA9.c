#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int **alocaMatriz(int **v, int m, int n){
	int i, j;
	v = (int **) malloc(m * sizeof(int *));
	for(i = 0; i < m; i++) v[i] = (int *) malloc(n * sizeof(int));
	return v;
}

int **lerMatriz(int **v, int m, int n){
	int i, j;
	for(i = 0; i< m; i++){
		for(j = 0; j < n; j++){
			printf("Insira o elemento v[%d][%d]", i, j);
			scanf("%d", &v[i][j]);
		}
	}
	return v;
}

void imprimeMatriz(int **v, int m, int n){
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d ", v[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int **desaloca(int **v, int m){
	int i;
	for(i = 0; i < m; i++) free(v[i]);
	free(v);
	return v;
}

int **multiplicaMatriz(int **v1, int **v2, int **v3, int m, int n){
	int i, j, k;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			for(k = 0; k < n; k++) 
			//*(v3+(i*m+j)) += **(v1+(i*m+k)) * (**(v2+(k*m+i)));
			//v3[i][j] += v1[i][k] * v2[k][j];
		}
	}
	return v3;
}

int main(){
	int m, n, **v1, **v2, **v3, l, p;
	puts("Insira o tamanho m x n da matriz 1:");
	scanf("%d x %d", &m, &n);
	puts("Insira o tamanho m x n da matriz 2:");
	scanf("%d x %d", &l, &p);
	v1 = alocaMatriz(v1, m, n);
	v2 = alocaMatriz(v2, l, p);
	v3 = alocaMatriz(v3, m, p);
	puts("Matriz 1:");
	v1 = lerMatriz(v1, m, n);
	puts("Matriz 2:");
	v2 = lerMatriz(v2, l, p);
	puts("Matriz 1:");
	imprimeMatriz(v1, m, n);
	puts("Matriz 2:");
	imprimeMatriz(v2, l, p);
	v3 = multiplicaMatriz(v1, v2, v3, m, n);
	imprimeMatriz(v3, m, p);
	v1 = desaloca(v1, m);
	v2 = desaloca(v2, l);
	v3 = desaloca(v3, m);
	return 0;
}
