#include "stdlib.h"
#include "stdio.h"

int trivial(char *p, char *texto)
{
	int i,j,k,ocor=0,m,n;
	m = strlen(p);
	n= strlen(texto);
	
	for(k=m-1;k<n;k++)
	{
		for(i=m-1,j=k;i>=0;i--,j--)
			if(texto[j]!=p[i])break;
		if(i<0)
			ocor++;
	}
	return ocor;
}

void scanm(int l, int c, int *p)
{
	int i,j;
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("[%i][%i]: ",i,j);
			scanf("%i",&(*(p+(i*c+j))));
		}
	}
}

void printm(int l, int c, int *p)
{
	int i,j;
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%i  ",*(p+(i*c+j)));
		}
		printf("\n");
	}	
}

void scanv(int n, int *p)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("[%i]:", i);
		scanf("%i", p+i);
	}
}

void printv(int n, int *p)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%i  ", *(p+i));
	}
}

int fat(int x)
{
	if(x==0)
		return 1;
	return x*fat(x-1);
}

void binary(int x)
{
	if(x/2!=0)
		binary(x/2);
	printf("%i",x%2);
	
}

int Strlen(char *p)
{
	int qtd=0;
	while(*p)
	{
		*p++;
		qtd++;
	}
	return qtd;
}

void somaMatriz(int *m1, int *m2, int *m3, int l, int c)
{
	int i,j;
	for(i=0;i<l;i++)
		for(j=0;j<c;j++)
			*(m3+(i*c+j))=*(m1+(i*c+j)) + *(m2+(i*c+j));
}

void MultMatriz(int *m1, int *m2, int *m3,int l,int c,int n)
{
	int i,j,k;
	for(i=0;i<l;i++)
	{
		for(j=0;j<n;j++)
		{
			*(m3+(i*n+j))=0;
			for(k=0;k<c;k++)
			{
				*(m3+(i*n+j))+=*(m1+(i*c+k))*(*(m2+(k*n+j)));
			}
		}
	}
}



int main()
{
	int l,c,n;
	puts("Insira l, c e n:");
	scanf("%i %i %i", &l,&c,&n);
	int m1[l][c],m2[c][n],m3[l][n];
	scanm(l,c,&m1);
	scanm(c,n,&m2);
	MultMatriz(&m1,&m2,&m3,l,c,n);
	printm(l,c,&m1);
	printf("\n\n");
	printm(c,n,&m2);
	printf("\n\n");
	printm(l,n,&m3);

	
}
