//1. Fac¸a um programa que leia um n´umero inteiro e o imprima. 
//2. Fac¸a um programa que leia um n´umero real e o imprima. 
//3. Pec¸a ao usuário para digitar trˆes valores inteiros e imprima a soma deles. 
//4. Leia um n´umero real e imprima o resultado do quadrado desse número. 
//5. Leia um n´umero real e imprima a quinta parte deste n´umero. 


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	printf("1\n");
	int x;
	
	printf("Digite o numero:");
	scanf("%d",&x);
	printf("X eh: %d",x);
	
	
	printf("\n2\n");
	float y;
	
	printf("Digite o numero real:");
	scanf("%f",&y);
	printf("Y eh: %f",y);
	
	
	printf("\n3\n");
	int a, b, c;
	
	printf("Digite os tres numeros:\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("A soma eh: %d",a+b+c);
	
	printf("\n4\n");
	
	float w;
	printf("Digite o numero real:");
	scanf("%f",&w);
	w = pow(w,2);
	printf("o quadrado eh: %f", w);
	
	printf("\n5\n");
	printf("Digite um numero real\n");
	scanf("%f",&w);
	printf("A quinta parte eh %f", w/5);
	
}
