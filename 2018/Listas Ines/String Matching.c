
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "locale.h" 
#include "ctype.h"

int match(char *texto,char *pal, int *pos){
	int n,m,i,j,k,ocor=0,t=0;
	int ult[256];
	
	n= strlen(texto);
	m = strlen(pal);
	
	for(k=m-1;k<n;k++){
		for(i=m-1,j=k;i>=0;i--,j--)
			if(texto[j]!=pal[i])
				break;
			if(i<0){
				ocor++;
				pos[t++]=j+1;
			}
	}
	return ocor;
}

void removeBrancoExtra(char *palavra){
	int n = strlen(palavra);
	for(int i = 0; i <= n; i++){
        if(i == n){
            if(palavra[0] == ' '){
                for(int j = 0; j <= n; j++)  palavra[j] = palavra[j+1];
            } 
        }
        //achar uma posição de branco seguida de um branco e enquanto a situação for verdadeira, a posição atual recebe a seguinte
		while(palavra[i] == ' ' && (palavra[i+1] == ' ' || palavra[i+1] == '\0')){            
            for(int j = i; j <= n; j++)  palavra[j] = palavra[j+1];
        }
    }
}

void remove_palavra(char palavra[], int pos, int n){
    int m = strlen(palavra);
    int p = m - n;
    for(int i = pos; i <= m; i++) palavra[i] = palavra[i+n];
}

void trataMinuscula(char *nome){
    int n = strlen(nome);
    for(int i = 0; i < n; i++) nome[i] = tolower(nome[i]);
}

void RefBib(char nome[]){
    int n, i, j, k, m, l, tam;
    int posicao[50];
    char ref[100];
    char conec[12][8]= {" da"," das"," de"," di"," do"," dos"," del"," la"," e"," junior"," filho"," neto"};
    for(int var = 0; var < 100; var ++) ref[var] = ' ';
    removeBrancoExtra(nome);
    trataMinuscula(nome);
    for(l = 0; l < 12; l++){
		m = match(nome, conec[l], posicao);
		if(m != 0){
			for(j = 0; j < m; j++){
				tam = strlen(conec[l]);
				remove_palavra(nome, posicao[j], tam);
			}
		}
	}
     n = strlen(nome);
    //localizar o último sobrenome
    for(i = n-1;  nome[i] != ' '; i--);
    //copiar o sobrenome pra ref
    j = 0;
    for(k = i+1; k < n; k++) ref[j++] = nome[k];
    ref[0] = toupper(ref[0]);
    //colocar a vírgula e um branco em ref
    nome[0] = toupper(nome[0]);
    ref[j++] = ',';
    ref[j++] = ' ';
    ref[j++] = nome[0];
    ref[j++] = '.';
    ref[j++] = ' ';
    //printf("%s\n", ref);
    //copiar as iniciais dos nomes intermediários
    for(k = 1; k < i; k++){ 
        if(nome[k] == ' '){
            nome[k+1] = toupper(nome[k+1]);
            ref[j++] = nome[k+1];
            ref[j++] = '.';
        }
    }
    ref[j] = '\0'; 
    //removeBrancoExtra(ref);
    for(int op = 0; op <= j; op++) printf("%c", ref[op]);
    puts("\n");
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[100];
	scanf("%[^\n]",nome);
	RefBib(nome);
    //printf("%s",nome);
}
