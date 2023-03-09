//7) Fa�a um game com as seguites regras:
//	a) O programa monta um vetor de 11 posi��es e distribui os elementos de 1 a 11 nele aleatoriamente
//	b) Depois o programa solicite que o usu�rio fa�a o mesmo.
//	c) O sistema n�o deve permitir que o usu�rio repita n�meros ja digitados ou digite n�meros fora do intervalo inteiro [1,11]
//	d) O programa vai comparar elemento por elemento em cada um dos vetores e:
//		i) quem tiver o maior valor ganha um ponto
//		ii) Se os valores forem iguais ningu�m ganha ponto
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
	
	
	//-For- para gerar o vetor do computador sem repeti��o
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

	printf("Digite um n�mero de 1 a 11,sem repeti��o:\n");

    //-For- para o usu�rio adicionar os valores de seu vetor	
	for(i=0;i<11;i++){
		scanf("%d",&n);
		vuser[i] = n;
		if(n > 11 || n == 0){
			printf("Apenas n�meros de 1 a 11!\n");
			i--;
		}
		for(j=0;j<i;j++){
			if(vuser[j] == n){
				printf("N�o repita n�meros!\n");
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
	
	printf("Vetor do usu�rio:\n");		
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
	printf("\nPontos do usu�rio:%d",user);
	
	if(comp > user){
		printf("\n O vencedor � o computador.");
	}
	else if(comp < user){
		printf("\n O vencedor � o jogador.");
	}
	else if(comp == user){
		printf("\n Empate!");
	}
	
system("pause");
return 0;
}
