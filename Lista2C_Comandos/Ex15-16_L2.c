#include<stdio.h>
#include<stdlib.h>


int main(){
	int num;
	
	printf("Digite o numero de 1 a 7:\n");
	scanf("%d",&num);
	
	switch(num){
		case 1:{
			printf("Domingo\n");
			break;
		}
		case 2:{
			printf("Segunda\n");
			break;
		}
		case 3:{
			printf("Ter�a\n");
			break;
		}
		case 4:{
			printf("Quarta\n");
			break;
		}
		case 5:{
			printf("Quinta\n");
			break;
		}
		case 6:{
			printf("Sexta\n");
			break;
		}
		case 7:{
			printf("Sabado\n");
			break;
		}
		default:{
			printf("Invalido");
			break;
		}
	}
	
	int num2;
	
	printf("Digite o numero de 1 a 12:\n");
	scanf("%d",&num2);
	
	switch(num2){
		case 1:{
			printf("Janeiro\n");
			break;
		}
		case 2:{
			printf("Fevereiro\n");
			break;
		}
		case 3:{
			printf("Marco\n");
			break;
		}
		case 4:{
			printf("Abril\n");
			break;
		}
		case 5:{
			printf("Maio\n");
			break;
		}
		case 6:{
			printf("Junho\n");	
			break;
		}
		case 7:{
			printf("Julho\n");
			break;
		}
		case 8:{
			printf("Agosto\n");
			break;
		}
		case 9:{
			printf("Setembro\n");
			break;
		}
		case 10:{
			printf("Outubro\n");
			break;
		}
		case 11:{
			printf("Novembro\n");
			break;
		}
		case 12:{
			printf("Dezembro\n");
			break;
		}
		
	}
	return 0;
		
}
