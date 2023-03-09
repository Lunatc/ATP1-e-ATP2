/*Nome:Cíntia Braz Mesquita                          			*/
/*RA:181040931                                  			    */
/*Exercício-Programa 5 -- Função calculo do conceito da média   */
/*Compilador:DevC++ 5.11                           				*/

#include<stdio.h>
#include<stdlib.h>

int fconceito(media){
	int media;
	char conceito;
	if (media < 5){
		return 'D';	
	}
	if (media >=5 && media < 7){
		return 'C';
		
	}
	if (media >= 7 && media < 9 ){
		return 'B';
	}
	if (media >= 9){
		return 'A';
	}
}

