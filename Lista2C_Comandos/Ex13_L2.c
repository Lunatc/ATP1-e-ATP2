#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	
	float n1, n2, n3, media;
	
	printf("Digite as três notas:\n");
	scanf("%f%f%f",&n1,&n2,&n3);
	
	media = (n1 + n2 + (2*n3))/4;
	
	printf("A media eh %.2f\n", media);
	
	if(media >= 60)
		printf("O aluno foi aprovado\n");
	else
		printf("O aluno foi reprovado\n");
		
		
}
