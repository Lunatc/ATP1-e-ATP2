/*Nome:C�ntia Braz Mesquita                          			*/
/*RA:181040931                                  			    */
/*Exerc�cio-Programa 5 -- Fun��o calculo do conceito da m�dia   */
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

