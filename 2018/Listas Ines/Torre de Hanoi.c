#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "math.h"
#include "locale.h"


/*
A TORRE DE HANOI

Objetivo: Mover os discos de A para B

Com 3 discos:
Saída--
Mover o disco 1 de A para B
Mover o disco 2 de A para C
Mover o disco 1 de B para C
Mover o disco 3 de A para B
Mover o disco 1 de C para A
mover o disco 2 de C para B
mover o disco 1 de A para B

Número de movimento necessários = 2^N-1, onde N é o número de discos 
N=3 discos, temos 2³ -1 = 7 movimentos
N=6 discos, temos 2^6-1=63 movimentos

Mover N discos da origem p/destino:
	-Mover n-1 discos da origem para auxliar
	-Mover o n-ésimo disco da origem para destino
	-mover N-1 discos da auxiliar para destino
*/
void Hanoi(int n, char origem,char destino,char aux)
{
	if(n==1)
		printf("Mover disco %d de %c para %c\n",n,origem,destino);
	else
	{
		Hanoi(n-1,origem,aux,destino);
		printf("Mover o disco %d de %c para %c\n",n,origem,destino);
		Hanoi(n-1,aux,destino,origem);
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	char aux[1], ori[1], dest[1];
	printf("Insira a quantidade de discos:");
	scanf("%i",&n);
	printf("Insira os nome da Origem, Destino e Auxiliar, respectivamente:");
	scanf("%c%c%c",ori,dest,aux);
	Hanoi(n,ori,dest,aux);
}
