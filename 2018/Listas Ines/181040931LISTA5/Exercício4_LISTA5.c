/*Nome:Cíntia Braz Mesquita                      			    */
/*RA:181040931                                        			*/
/*Exercício-Programa 1 -- Permutações circulares                */
/*Compilador:DevC++ 5.11                                		*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void contadora(char data1[],char data2[]){
	char aux_dia1[3],aux_mes1[3],aux_ano1[5];
	char aux_dia2[3],aux_mes2[3],aux_ano2[5];
	int i,n,dia1 = 0,mes1 = 0,dia2 = 0,mes2 = 0,ano1 = 0,ano2 = 0;
	int dias = 0;
	
	for(i=0;i<3;i++){
		aux_dia1[i] = data1[i];
	}
	
	dia1 = atoi(aux_dia1);
	
	for(i = 0;i < 3;i++){
		aux_mes1[i] = data1[i+3];	
	}
	
	mes1 = atoi(aux_mes1);

	for(i=0;i<3;i++){
		aux_ano1[i] = data1[i+6];	
	}
	
	ano1 = atoi(aux_ano1);

	for(i=0;i<3;i++){
		aux_dia2[i] = data2[i];
	}
	
	dia2 = atoi(aux_dia2);

	for(i=0;i<3;i++){
		aux_mes2[i] = data2[i+3];	

	}
	
	mes2 = atoi(aux_mes2);
	
	for(i=0;i<3;i++){
		aux_ano2[i] = data2[i+6];	
	}
	
	ano2 = atoi(aux_ano2);
	
	if(ano1 != ano2){
		printf("Apenas datas em um mesmo ano.");
	}
	
	if(mes1 == mes2){
		if(dia1 > dia2){
			dias = dia1 - dia2;
		}
		else if(dia2 > dia1){
			dias = dia2 - dia1;
		}
		else {
			printf("As datas sao iguais.");
			dias = 0;
		}		
	}
		
	else if(mes1 > mes2){
		for(i = mes2;i < mes1;i--){
			if((i == 1) || (i == 3) || (i == 5) || (i == 7) ||(i == 8) ||(i == 10)||(i == 12)){
				if(i == mes1){
					dias += 31 - dia1;
				}
				else if(i == mes2 + 1){
					dias += dia2;
				}
				else dias+=31;
			}
			else if(i == 4 || i == 6 || i == 6 || i == 9 ||i == 11){
				if(i == mes1){
					dias += 30 - dia1;
				}
				else if(i == mes2 + 1){
					dias += dia2;
				}
				else dias += 30;
			}
			else if(i == 2){
				if(i == mes1){
					dias += 29 - dia1;
				}
				else if(i == mes2 + 1){
					dias += dia2;
					}
				else dias+=29;
			}
		}	
	}
		
	else if(mes2 > mes1){
		for(i = mes1;i<mes2;i--){
			if(i == 1 || i == 3 || i == 5 || i == 7 ||i == 8 ||i == 10 ||i == 12){
				if(i == mes2){
					dias += 31 - dia2;
				}
				else if(i == mes1 + 1){
					dias += dia1;
				}
				else dias += 31;
			}
			else if((i == 2) || (i == 4) || (i == 6) || (i == 6) || (i == 9) ||(i == 11)){
				if(i == mes2){
					dias += 30 - dia2;
				}
				else if(i == mes1 + 1){
					dias += dia1;
				}
				else dias += 30;
			}
		}
	}				
		printf("%d",dias);
}

int main(){
	char data1[10],data2[10];
	
	printf("Digite a primeira data no formato(xx/xx/xxxx):\n");
	scanf("%s",data1);
	printf("Digite a segunda data no formato(xx/xx/xxxx):\n");
	scanf("%s",data2);
	contadora(data1,data2);
	return 0;
}
