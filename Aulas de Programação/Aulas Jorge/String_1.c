#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
	char string1[10], string2[10], i=0, igual=1, dif = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o nome 1:\n");
	scanf("%[^\n]",string1);
	fflush(stdin);

	
	printf("%s\n",string1);
	
	
	printf("Digite o nome 2:\n");
	scanf("%s\n",string2);
	fflush(stdin);
	
	printf("%s",string2);
	
	while(igual != 0){
		if(string1[i] != string2[i]){
			igual = 0;
		}
		else
			i++;
			
		if(string1[i] != '\0' && string2[i] == '\0')
			dif = 1;
		else if(string1[i] == '\0' && string2[i] != '\0')
			dif = 1;
			
	}
	
	if(dif == 1 || igual == 0){
		printf("As palavras não são iguais");
	}
	
	else 
		printf("As palavras são iguais");
	

	
	return 0;	
}
