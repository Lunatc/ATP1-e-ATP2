/*Nome:C�ntia Braz Mesquita                      			    */
/*RA:181040931                                        			*/
/*Exerc�cio-Programa 1 -- Permuta��es circulares                */
/*Compilador:DevC++ 5.11                                		*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void remover(char string[],int pos,int n){
	int i,l;
	
	printf("Digite a string a ser cortada:\n");
	scanf("%s",string);
	
	printf("Digite a posi�ao da string a ser cortada:\n");
	scanf("%d",&pos);
	
	printf("Digite o total de caracteres a serem removidos:\n");
	scanf("%d",&n);
	
	l = strlen(string);
	
	for(i=0;i<l;i++){
		if(i > pos && (l - n)>=i){
			string[i] = string[i+n];
		}	
	}
	printf("%s",string);	
}

int main(){
	int pos,n;
	char string[200];
	
	remover(string,pos,n);
}
