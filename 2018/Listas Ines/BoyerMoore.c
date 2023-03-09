// Nome: Gianlucca A. Leoncini
// RA: 171042311
// Exercício 4 -- Soma dos Dígitos de um Número
// Compilador: gcc
#include "stdio.h"
#include "stdlib.h"
#include "locale.h"
#include "string.h"

int BoyerMoore(char *a, char *b){
    int i, j, k, ocorrencia=0, tamanho, n, m;
    int ult[256];
    tamanho=strlen(a);
    n=strlen(b);
    
    //preprocessamento da palavra a
    for(i = 0; i < 256; i++) ult[i] = -1;
    //percorrer a palavra a guardar os indices de onde a letra ocorre
    for(i = 0; i < tamanho; i++) ult[a[i]] = i;
    
    //varredura do texto
    for(k = tamanho-1;  k < n; k =k + tamanho - ult[b[k+1]]){
        //varredura da palavra
        for(i = tamanho-1, j = k; i >=0; i--, j--) if(a[i] != b[j]) break;
        if(i < 0) ocorrencia++;
    }
    return ocorrencia;
}

int main(){
	char a[100],b[1000];
	
	printf("Digite o texto:\n");
	scanf("%[/^n]",b);
	fflush(stdin);
	printf("Digite a palavra a ser procurada:\n");
	scanf("%s",&a);
	fflush(stdin);
	
	printf("Numero de ocorrencias:%d",BoyerMoore(a,b));
	return 0;
	
}
