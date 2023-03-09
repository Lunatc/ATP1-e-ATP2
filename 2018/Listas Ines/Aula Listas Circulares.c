//Listas Circulares
typedef struct no{
	char nome[30];
	struct no *prox;
}listaC;

//Opera��es
//1) Criar uma lista circular colocando elementos sempre no final da lista. A fun��o recebe o ponteiro p/ o in�cio da lista L e a informa��o a ser inserida na lista e retorna o ponteiro p/in�cio da lista.
listaC *InsereFinal(listaC *L, char *Info)
{
	listaC *novo,*p;
	novo=(listaC*)malloc(sizeof(listaC));
	strcpy(novo->nome,Info);
	novo->prox=L;
	if(L==NULL)
	{
		novo->prox=novo;
		return novo;	
	}	
	novo->prox=L;
	p=L;
	while(p->prox!=L) p=p->prox;
	p->prox=novo;
	return L;
} //fim da fun��o

//2) Escrever uma fun��o que cria uma lista circular, inserindo o novo elemento sempre no in�cio da lista.
listaC *InsereInicio(listaC *L, char *Info)
{
	listaC *novo,*p;
	novo=(listaC*)malloc(sizeof(listaC));
	strcpy(novo->nome,Info);
	novo->prox=L;
	if(L==NULL)
	{
		novo->prox=novo;
		return novo;	
	}	
	novo->prox=L;
	p=L;
	while(p->prox!=L) p=p->prox;
	p->prox=novo;
	return novo;
} //fim da fun��o
//3) Fun��o para imprimir uma lista circular
void ImprimeCircular(listaC *L)
{
	listaC *p;
	if(L==NULL) return;
	p=L;
	do{
		printf("%s \n",p->nome);
		p=p->prox;
	}while(p!=L);	
	
}
//4) Escrever a fun��o que recebe um n� p a lista circular e remove o n� sucessor de p. A fun��o retorna a informa��o do n� que foi removido e tamb�m o endere�o de n� sucessorn� removido.
listaC *Remove(listaC *p, char *info){
	listaC *q;
	q=p->prox;
	strcpy(info,q->nome);
	p->prox=q->prox;
	free(q);
	return p->prox; //retorna o sucessor do n� que foi removido.
}

//programa principal para criar uma lista circular e remover um elemento.

int main()
{
	listaC *L=NULL;
	char nome[30],nomeRemovido[30];
	puts("Forne�a nomes para a lista (FIM) terminada\n");
	scanf("%[^\n]",nome);
	while(strcmp(nome,"FIM"))
	{
		L=InsereInicio(L,nome);
		getchar();
		scanf("%[^\n]",nome);	
	}
	ImprimeCircular(L);
	L=Remove(L,nomeRemovido);
	printf("O elemento remoido foi %s\n",nomeRemovido);
	ImprimeCircular(L);
	return 0;	
}//fim main()
