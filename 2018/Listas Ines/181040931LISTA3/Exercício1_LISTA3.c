#include<stdio.h>
#include<stdlib.h>

void calculadora(int a, int b,char op,int *result){
		if(op == '+'){
		*result = a + b;
	}
	else if(op == '-'){
		*result = a - b;
	}
	else if(op == '*'){
		*result = a * b;
	}
	else if(op == '/'){
		*result = a / b;
	}
	return;
}

int main(void){
	int a,b,result = 0;
	char op;
	printf("Digite o primeiro valor:");
	scanf("%d",&a);
	printf("Digite o segundo valor:");
	scanf("%d",&b);
	printf("Digite o sinal do operador a ser utilizado\n(+_mais,-_menos,*_vezes,/_divisao)\n");
	fflush(stdin);
    op = getchar();     
	calculadora(a,b,op,&result);
	printf("O resultado eh: %d",result);
}

