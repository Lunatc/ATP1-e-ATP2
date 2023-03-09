//7) Faça um game com as seguites regras:
//	a) O programa monta um vetor de 11 posições e distribui os elementos de 1 a 11 nele aleatoriamente
//	b) Depois o programa solicite que o usuário faça o mesmo.
//	c) O sistema não deve permitir que o usuário repita números ja digitados ou digite números fora do intervalo inteiro [1,11]
//	d) O programa vai comparar elemento por elemento em cada um dos vetores e:
//		i) quem tiver o maior valor ganha um ponto
//		ii) Se os valores forem iguais ninguém ganha ponto
//	e) O programa deve mostrar os dois vetores, os pontos de cada um, e quem venceu a partida (computador, jogador ou empate).

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int vcomp[11],vuser[11];  //Vetor do computador e vetor do usuario
	int i,j,n,cont=0;         //Indices e auxiliares
	int comp=0,user=0;        //Contador dos pontos
	
	
	//-For- para gerar o vetor do computador sem repetição
	for(i=0;i<11;i++){
		
		n =rand()%11 + 1;
		
		for(j=0;j<11;j++){
			if(vcomp[j] != n){
				cont = cont + 1;
			}
		}
		if( cont == 11 ){
			vcomp[i] = n;
		}
		else {
			i = i - 1;
		}
		cont = 0;
	}

	printf("Digite um número de 1 a 11,sem repetição:\n");

    //-For- para o usuário adicionar os valores de seu vetor	
	for(i=0;i<11;i++){
		scanf("%d",&n);
		vuser[i] = n;
		if(n > 11 || n == 0){
			printf("Apenas números de 1 a 11!\n");
			i--;
		}
		for(j=0;j<i;j++){
			if(vuser[j] == n){
				printf("Não repita números!\n");
				i--;
			}
		}
		
	}
		
	
	printf("\n");

	printf("Vetor do computador:\n");	
	for(j=0;j<11;j++){
		printf("%3d",vcomp[j]);
	}
	
	printf("\n");
	
	printf("Vetor do usuário:\n");		
	for(j=0;j<11;j++){
		printf("%3d",vuser[j]);
	}
	
	for(j=0;j<11;j++){
		if(vcomp[j] > vuser[j]){
			comp = comp + 1;
		}
		else if(vcomp[j] < vuser[j]){
			user = user + 1;
		}
	}
	
	printf("\nPontos do computador:%d",comp);
	printf("\nPontos do usuário:%d",user);
	
	if(comp > user){
		printf("\n O vencedor é o computador.");
	}
	else if(comp < user){
		printf("\n O vencedor é o jogador.");
	}
	else if(comp == user){
		printf("\n Empate!");
	}
	
system("pause");
return 0;
}
