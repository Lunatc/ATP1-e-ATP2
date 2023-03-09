#include<stdio.h>
#include<stdlib.h>

int main(){
	int basemaior, basemenor, altura, area;
	
	printf("Digite a basemaior, basemenor e a altura\n");
	scanf("%d%d%d",&basemaior,&basemenor,&altura);
	
	area = ((basemaior + basemenor)*altura)/2;
	
	printf("A area eh: %d",area);
}
