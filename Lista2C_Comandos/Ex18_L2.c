#include<stdio.h>
#include<stdlib.h>

int main(){
	int num1, num2, menu=0,op;
	
	printf("Digite o n1 e o n2:\n");
	scanf("%d%d",&num1,&num2);
	
	while(menu == 0){
		printf("Digite:\n 1-Para soma\n2-Para subtracao\n3-Para multiplicacao\n4-Para divisao\n5-Para sair\n");
		scanf("%d",&op);
		
		switch(op){
			case 1:{
				printf("soma: %d\n",num1+num2);
				break;
			}
			case 2:{
				printf("Subtracao: %d\n", num1-num2);
				break;
			}
			case 3:{
				printf("Multiplicacao: %d\n", num1*num2);
				break;
			}
			case 4:{
				printf("Divisao: %d\n", num1/num2);
				break;
			}
			case 5:{
				menu = op;
				break;
			}
		}
	}
}
