#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
	int x, y, z;
	
	printf("Digite os tres valores:\n");
	scanf("%d%d%d",&x,&y,&z);
	
	x = pow(x,2);
	y = pow(y,2);
	z = pow(z,2);
	
	printf("A soma eh %d", x+y+z);
	
	float n1,n2,n3,n4,media;
	
	printf("\nDigite as quatro notas:\n");
	scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
	
	media = (n1 + n2 + n3 + n4)/4;
	
	printf("A media eh: %f",media);
}
