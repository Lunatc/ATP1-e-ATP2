#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	float n1, n2, n3, media;
	
	printf("Digite as 3 notas:\n");
	scanf("%f%f%f",&n1,&n2,&n3);
	
	media = ((n1*2)+(n2*3)+(n3*5))/10;
	
	if(media >= 5)
		printf("Aprovado\n");
	else if(media < 3)
		printf("Reprovado\n");
	else
		printf("De recuperacao");
		
	return 0;	
}
