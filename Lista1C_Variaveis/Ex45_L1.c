#include<stdio.h>
#include<stdlib.h>

int main(){
	char letra;
	
	printf("Digite a letra que quer converter:\n");
	scanf("%c",&letra);
	
	int p_maiu = 'A', p_min = 'a', n_Mm, n_mM;
	
	n_Mm = p_maiu - p_min;
	
	printf("%c\n", letra + n_Mm);
	
	printf("%c\n", letra - n_Mm);
}
