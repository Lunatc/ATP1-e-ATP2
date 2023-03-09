#include "stdio.h"
#include "stdlib.h"
#include "string.h"
    
int ndias(char str[], char str2[]){
	
	int i=0, j=0, nd, nd2, nm, nm2, n2, na, numerodias, aux, final;
	
	char dia[2], mes[3], ano[5];
	char dia2[2], mes2[3], ano2[5];
	
	//extrai da string principal o dia	
	while(str[i]!='/'){
		dia[i] = str[i];
		dia2[i] = str2[i];
		i++;
	}
	
	dia[i] = '\0';
	dia2[i] = '\0';
	i++;	
	//extrai da string principal o mes		
	while(str[i] != '/'){
		mes[j] = str[i];
		mes2[j] = str2[i];
		i++;
		j++;
	}
	
	mes[j] = '\0';
	mes2[j] = '\0';
	i++;
	j = 0;
	
	//extrai da string principal o ano		
	while(str[i] != '\0'){
		ano[j] = str[i];
		ano2[j] = str2[i];
		i++;
		j++;
	}
	//extrai os numeros das strings	
	nd = atoi(dia);
	nd2 = atoi(dia2);
	nm = atoi(mes);
	nm2 = atoi(mes2);
	na = atoi(ano);

	//forço nd(numero de dias) seja o menor que nd2	
	if(nd2<nd){
		aux = nd2;
		nd2 = nd;
		nd = aux;
	}
	
	final = nd2 - nd;
	
	//se o mes for igual, ele retorna a subtração dos dias somente		
	if(nm==nm2)
		return final;
		
	//forço nm(numero do mes) seja o menor que nm2 para entrar no for	
	if(nm2<nm){
		aux = nm2;
		nm2 = nm;
		nm = aux;
	}
	
	//testo as condições que adicionam dias ao valor final
	for(i=nm; i<nm2; i++){
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
			final += 31;
		else if(i==4 || i==6 || i==9 || i==11)
			final += 30;
		else if( i == 2 && na%4==0)
			final += 29;
		else if(i==2)
			final += 28;
	}
	
	return final;
	
}

int main(){
	
	char str[12], str2[12];
	puts("Digite a primeira data no formato: XX/XX/XXXX");
	scanf("%s", str);
	puts("\nDigite a segunda data no formato: XX/XX/XXXX");
	scanf("%s", str2);	
	
	printf("O espaco entre as datas e de %d dias", ndias(str,str2));
}
