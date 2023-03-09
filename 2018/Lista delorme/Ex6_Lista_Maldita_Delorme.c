//6) Faça um programa que solicite a entrada de uma matriz 4 x 4 e mostre a distância euclidiana entre o maior e o menor valor
//(Utilize os índices da matriz como os eixos x e y de um plano cartesiano)

#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include<math.h>

int main()
{
	srand(time(NULL));

	int m[4][4],x,y,l,c;
	
	float d,distancia,a,b;
	
	printf("Digite os valores da matriz (4 x 4):\n");
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			scanf("%d",&m[l][c]);
		}
	}
	
	
	a = ( ( 3 ) - ( 0 ) );
	b = ( ( 3 ) - ( 0 ) );
	d = ( pow(a,2) ) + ( pow(b,2) );
	
	for(x=0;x<4;x++){
		for(y=0;y<4;y++){
			distancia = sqrt(d);
		}
	}
	
	printf("Distancia euclidiana:%f",distancia);
	printf("\n\n");
	
	printf("Matriz(4x4):\n");
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			printf("%3d",m[l][c]);
		}printf("\n");
	}
	


system("pause");

return 0;
}
