/*Nome:Cíntia Braz Mesquita                      			    */
/*RA:181040931                                        			*/
/*Exercício-Programa 1 -- Permutações circulares                */
/*Compilador:DevC++ 5.11                                		*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void permutar(char str[]){
	int i,j,n;
	char aux; 
	
	n = strlen(str);
	
	for(j=0;j<n;j++){
		aux = str[n-1];
	
		for(i=n-1;i>0;i--){
			str[i] = str[i-1];
		}
	
		str[0] = aux;
	
		printf("%s\n\n",str);
	}
}

int main(){
	char str[50];
	
	printf("Digite a palavra a ser permutada:");

	scanf("%s",str);
	
	permutar(str);
	
	return 0;
}
