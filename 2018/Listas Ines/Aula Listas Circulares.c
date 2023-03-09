//Listas Circulares
typedef struct no{
	char nome[30];
	struct no *prox;
}listaC;

//Operações
//1) Criar uma lista circular colocando elementos sempre no final da lista. A função recebe o ponteiro p/ o início da lista L e a informação a ser inserida na lista e retorna o ponteiro p/início da lista.
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
} //fim da função

//2) Escrever uma função que cria uma lista circular, inserindo o novo elemento sempre no início da lista.
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
} //fim da função
//3) Função para imprimir uma lista circular
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
//4) Escrever a função que recebe um nó p a lista circular e remove o nó sucessor de p. A função retorna a informação do nó que foi removido e também o endereço de nó sucessornó removido.
listaC *Remove(listaC *p, char *info){
	listaC *q;
	q=p->prox;
	strcpy(info,q->nome);
	p->prox=q->prox;
	free(q);
	return p->prox; //retorna o sucessor do nó que foi removido.
}

//programa principal para criar uma lista circular e remover um elemento.

int main()
{
	listaC *L=NULL;
	char nome[30],nomeRemovido[30];
	puts("Forneça nomes para a lista (FIM) terminada\n");
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
