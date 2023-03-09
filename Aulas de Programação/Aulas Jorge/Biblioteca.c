#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct livros{
	int codigo;
	char doacao;
	char nome[10];
	char autor[10];
	char editora[10];
	char area;
};

int main(){
	
	struct livros biblioteca[1500];
	
	int aux = 0, acesso, codigo, i = 0,n, achou=0;
	
	while(aux == 0){
		printf("Selecione o tipo de acesso:\n");
		printf("1-Bibliotecario\n");
		printf("2-Usuario\n");
		printf("3-Sair\n");
		scanf("%d",&acesso);
		
		switch(acesso){
			case 1:{
				printf("Cadastro de livro\n");
				printf("Digite quantos cadastros:\n");
				scanf("%d",&n);
				for(i=0;i<n;i++){
					printf("Digite o codigo do livro:\n");
					scanf("%d",&biblioteca[i].codigo);
					
					fflush(stdin);
					printf("Digite se o livro eh de doacao ou nao (S/N).\n");
					scanf("%c",&biblioteca[i].doacao);
					fflush(stdin);
					
					printf("Digite o nome do livro:\n");
					scanf("%s",biblioteca[i].nome);
					fflush(stdin);
					
					printf("Digite o autor do livro:\n");
					scanf("%s",biblioteca[i].autor);
					fflush(stdin);
					
					printf("Digite a editora do livro:\n");
					scanf("%s", biblioteca[i].editora);
					fflush(stdin);
					
					printf("Digite a area do livro:\n");
					printf("B- Biologicas\n");
					printf("E- Exata\n");
					printf("H- Humanas\n");
					
					scanf("%c",&biblioteca[i].area);
				}
				break;
			}
			case 2:{
				printf("Busca de livro:\n");
				printf("Digite o codigo do livro:\n");
				scanf("%d",&codigo);
				
				for(i=0;i<1500;i++){
					if(codigo==biblioteca[i].codigo){
						printf("Livro encontrado\n");
						achou = 1;
						printf("Nome: %s\n",biblioteca[i].nome);
						printf("Autor:%s\n",biblioteca[i].autor);
					}
				}
				
				if(achou = 0){
					printf("Livro nao encontrado\n");
				}
				
				
				break;
			}
			case 3:{
				aux = 1;
				break;
			}
			default:{
				printf("Invalido\n");
				aux = 1;
				break;
			}
		}
	}
}
