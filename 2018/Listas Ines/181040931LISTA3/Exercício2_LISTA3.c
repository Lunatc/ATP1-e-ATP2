/*Nome:C�ntia Braz Mesquita                           */
/*RA:181040931                                        */
/*Exerc�cio-Programa 2 -- Contador para um vetor      */
/*Compilador:DevC++ 5.11   							  */

#include<stdio.h>
#include<stdlib.h>

//Fun��o contador 
int contador(float x,int n,float vetor[]){
	int i,cont = 0;
//Verifica��o se x � igual a algum valor do vetor
	for(i=0;i<n;i++){
		if(x == vetor[i]){
			cont++;
		}
	}
	return cont;
}

int main(){
	int n,i,cont = 0;
	float x;

//Programa principal recebe o valor de x
	printf("Digite o valor de x:");
	scanf("%f",&x);
//Programa principal recebe n
	printf("\nDigite o a quantidade de numeros: ");
	scanf("%d",&n);

	float vetor[n];
//Programa principal recebe o vetor
	printf("\nDigite os valores a serem postos no vetor(de 0 a 100):\n");
	for(i=0;i<n;i++){
		scanf("%f",&vetor[i]);
	}
//Variavel cont recebe a contagem da fun��o contador
	cont = contador(x,n,vetor);

	printf("%.3f apareceu %d vezes no vetor",x,cont);	
}



