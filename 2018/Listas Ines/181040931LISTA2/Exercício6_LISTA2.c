/*Nome:Cíntia Braz Mesquita                          				  */
/*RA:181040931                                       			 	  */
/*Exercício-Programa 6 -- Verificação se um número é segmento do outro*/
/*Compilador:DevC++ 5.11  									          */


#include<stdio.h>
#include<stdlib.h>
	
/*a)*/
int encaixa(int a,int b){
	int resto_a = 0,resto_b = 0,cont = 0;
		while(b != 0){
			resto_a = a%10;
			resto_b = b%10;
			if(resto_a != resto_b){
				cont = 1;
			}
		}	
		if (cont == 0){
			return 1;
		}
		else{
			return 0;
		}
	}
	
	int main(){
		int a,b,x,y,resto_maior,resto_menor,cont = 1;
			printf("Digite o valor de a:");
			scanf("%d",&a);
			printf("Digite o valor de b:");
			scanf("%d",&b);
		
			if(encaixa(a,b) == 1){
				printf("b esta incluso em a.");
			}
		
			else if(a > b || a == b){
				x = a;
				y = b;
			}
		
			else{
				x = b;
				y = a;
			}
		
			while(x != 0 || cont != 0){
				resto_maior = x%10;
				x = x/10;
				resto_menor = y%10;
				if(resto_menor == resto_maior){
					y = y/10;
					cont = 1;
				}
				else{
					cont = 0;
				}
			}
		
			if(cont == 0){
				printf("Os numeros não sao segmentos um do outro.");
			}
			else{
				if(a>b){
					printf("b é segmento de a.");
				}	
				else if(a<b){
					printf("a é segmento de b");
				}
				else{
					printf("a é igual a b");
				}
			} 
		}

