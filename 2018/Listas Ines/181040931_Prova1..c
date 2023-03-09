#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void criptografia(char texto[],int chave,char resultado[],int opcao_n){
	int n,i,j,pos,verificador = 0,aux_c;
	
	//vetor contendo as letras do alfabeto minusculas(alfa_min) e maiusculas(alfa_max)

	char alfa_min[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char alfa_max[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	
	char aux;
	
	n = strlen(texto);
	
	//Para a opção cifrar
	
	if(opcao_n == 1){
		for(i=0;i<=n;i++){
			//for para achar a posiçao correspondente da letra do texto dentre as letras do alfabeto tanto minusculas quanto maiusculas
			
			for(j=0;j<26;j++){
			
				//if para se a letra for minuscula
				if(texto[i] == alfa_min[j]){
					verificador = 1;//Se for uma letra minuscula o verificador recebe 1
					aux = texto[i];
					pos = j;
				}
			
				//if para se a letra for maiuscula
				else if(texto[i] == alfa_max[j]){
					verificador = 2;//Se for uma letra maiuscula o verificador recebe 2
					aux = texto[i];
					pos = j;
				}
				else if(texto[i] == ' ')verificador = 0;
			}
			
			//Condição para retornar ao inicio do vetor alfa caso a soma da posiçao com a chave seja maior que 25
			if(pos + chave > 25){
				aux_c = (pos + chave) - 25;
			}
			
			//Posiçao da letra cifrada
			else aux_c = pos + chave ;
			
			//Variavel recebe a letra cifrada minuscula correspondente a posiçao encontrada
			if(verificador == 1){
				resultado[i] = alfa_min[aux_c];
			} 
			
			//Variavel recebe a letra cifrada maiuscula correspondente a posiçao encontrada
			else if(verificador == 2){
				resultado[i] = alfa_max[aux_c];
			}
			
			else(resultado[i] = texto[i]);
			aux_c = 0;
		}	
		printf("Texto Cifrado: %s\n",resultado);
	}
	
	//Para a opção decifrar
	
	else if(opcao_n == 2){
		for(i=0;i<=n;i++){
			//for para achar a posiçao correspondente da letra do texto dentre as letras do alfabeto tanto minusculas quanto maiusculas
			for(j=0;j<26;j++){
				//if para se a letra for minuscula
				if(texto[i] == alfa_min[j]){
					verificador = 1;//Se for uma letra minuscula o verificador recebe 1
					aux = texto[i];
					pos = j;
				}
				//if para se a letra for maiuscula
				else if(texto[i] == alfa_max[j]){
					verificador = 2;//Se for uma letra maiuscula o verificador recebe 2
					aux = texto[i];
					pos = j;
				}
				else if(texto[i] == ' ')verificador = 0;
			}
			//Condição para retornar ao final do vetor alfa caso a posiçao seja menor que a chave
			if(pos < chave){
				aux_c = 25 + (pos-chave);
			}
			
			//Posiçao da letra cifrada
			else aux_c = pos - chave;
			
			//Variavel recebe a letra cifrada minuscula correspondente a posiçao encontrada
			if(verificador == 1){
				resultado[i] = alfa_min[aux_c];
			} 
			
			//Variavel recebe a letra cifrada maiuscula correspondente a posiçao encontrada
			else if(verificador == 2){
				resultado[i] = alfa_max[aux_c];
			}
			else(resultado[i] = texto[i]);
			aux_c = 0;
		}
		printf("Texto Decifrado: %s\n",resultado);
	}
	
}

int main(){
	char texto[2000],resultado[2000],opcao_str[200];
	int chave,opcao_n;
	
	puts("Programa para criptografia de textos\n");
	puts("  Digite qual a opcao a ser realizada:\n");
	puts("   Cifrar ou Decifrar.\n");
	scanf("%s",opcao_str);
	
	if(strcmp(opcao_str,"cifrar") == 0 || strcmp(opcao_str,"Cifrar")==0){
		opcao_n = 1;
	}
	
	else if(strcmp(opcao_str,"decifrar") == 0 || strcmp(opcao_str,"Decifrar")==0){
		opcao_n = 2;
	}
	
	switch(opcao_n){
		case 1:
			puts("Digite o texto a ser cifrado:\n");
			fflush(stdin);
			scanf("%[^\n]",texto);
			fflush(stdin);
			printf("Digite a chave numerica(de 1 a 25):\n");
			scanf("%d",&chave);
			criptografia(texto,chave,resultado,opcao_n);
			default:
				break;
			
		case 2:
			puts("Digite o texto a ser decifrado:\n");
			fflush(stdin);
			scanf("%[^\n]",texto);
			fflush(stdin);
			printf("Digite a chave numerica:\n");
			scanf("%d",&chave);
			criptografia(texto,chave,resultado,opcao_n);
			break;
	}
	
	printf("Texto original: %s ",texto);
	
}

