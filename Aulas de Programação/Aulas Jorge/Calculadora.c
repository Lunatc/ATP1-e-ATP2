#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int x, y, i;
	
	
	printf("Digite x:\n");
	scanf("%d",&x);
	
	printf("Digite y:\n");
	scanf("%d",&y);
	
	while(i != 5){
	
		printf("Escolha a opção que deseja realizar:\n");
		printf(" 1-Soma.\n");
		printf(" 2-Subtracao.\n");
		printf(" 3-Multiplicacao.\n");
		printf(" 4-Divisao.\n");
		printf(" 5-Sair do programa.\n");
		scanf("%d",&i);
		
		
		switch(i){
			case 1:{
				printf("%d\n", x+y);
				break;
			}
			case 2:{
				printf("%d\n", x-y);
				break;
			}
			case 3:{
				printf("%d\n", x*y);
				break;
			}
			case 4:{
				printf("%d\n", x/y);
				break;
			}
			case 5:{
				i = 5;
				break;
			}
			default:{
				i = 5;
				break;
			}
		}
	}

	return 0;
}
