#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct data{
	int dia;
	int mes;
	int ano;
}DATA[10];


int main(){
	
	DATA[0].dia = 28;
	DATA[0].mes = 7;
	DATA[0].ano = 2020;
	
	printf("%d", DATA[0].dia); 
}
