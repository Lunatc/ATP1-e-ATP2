//5 - Busca e Remoção
//Escrever uma função que recebe uma lista encadeada L e um elemento x e remove de L o primeiro nó que contiver o elemento x. Caso x não esteja na lista, a função não remove nenhum nó.
//a) Lista com nó de cabeçalho.

void BuscaRemocaoC(lista *L, int x)
{
	lista *p,*ant;
	
	ant=L;
	p=L->prox;
	while(p!=NULL&&p->elem!=x)
	{
		ant=p;
		p=p->prox;	
	}
	if(p!=NULL) //x foi encontrado no nó p
	{
		ant->prox=p->prox;
		free(p);
	}	
}//fim função

//b) Lista pura, sem nó de cabeçalho.
//1° Caso: lista vazia => nada a fazer.
//2° Caso: Remoção do 1° nó da lista.
//3° Caso: Remoção de um nó do meio ou final da lista.

lista *BuscaRemocaoP(lista *L, int x)
{
	lista *ant,*p;
	ant=NULL;
	p=L;
	while(p!=NULL&&p->elem!=x)
	{
		ant=p;
		p=p->prox;
	}		
	if(p!=NULL) //x foi encontrado no nó p
	{
		if(ant==NULL) //1° Caso: remoção do 1° elemento da lista L.
		{
			L=L->prox;
			free(p);	
		}
		else //3° Caso: remoção de um nó do meio ou final da lista.
		{
			ant->prox=p->prox;
			free(p);
		}
	}
	return L;
}//fim função

//6 - Operação de Busca e inserção em uma lista encadeada sem cabeça e ordenada (ordem crescente)
//(a) - Busca: localiza-se a posição de inserção , considerando a informação de lista ordenada.
//(b) - Inserção: idêntico à inserção da aula anterior.
//1° Caso: ¯\_(?)_/¯
//2° Caso: Inserção de um nó no início da lista L.
//3° Caso: Inserção no meio ou no final da lista. Neste caso o ponteiro de início da lista não se altera.

lista *BuscaInsereOrdenadaP(lista *L, int x)
{
	lista *NOVO,*ant,*p;
	NOVO=(lista*)malloc(sizeof(lista));
	NOVO->elem=x;
	if(L==NULL) //1° Caso: lista vazia
	{
		NOVO->prox=NULL;
		L=NOVO;	
	}
	else
	{
		//localiar a posição de inserção na lista ordenada
		ant=NULL;
		p=L;
		while(p!=NULL&&p->elem<=x)
		{
			ant=p;
			p=p->prox;
		}
		if(ant==NULL) //2° Caso: inserção no início da lista.
		{
			NOVO->prox=L;
			L=NOVO; //mudança do endereço do nó inicial de L.
		}
		else //3° Caso: inserção no meio ou final da lista.
		{
			NOVO->prox=p;
			ant->prox=NOVO;
		}	
	}
	return L;	
}

//6 - Busca e remoção de um elemento em uma lista ordenada sem nó de cabeçalho.
//(a) Busca: encontrar o elemento a ser eliminado, usando a informação de lista ordenada.
//(b) Remoção: O processo idêntico à busca e remoção anterior.
//Casos a serem avaliados:
//1° Caso: lista vazia (a função retorna sem fazer nada).
//2° Caso: remoção do 1° elemento da lista.
//3° Caso: remoção do meio ou final da lista.

lista *BuscaRemoveOrdenadaP(lista *, int x)
{
	lista *ant,*p;
	if(L==NULL) return L; //1° Caso: lista vazia
	//localizar o elemento x na lista
	ant=NULL;
	p=L;
	while(p!=NULL&&p->elem<x)
	{
		ant=p;
		p=p->prox;	
	}	
	//verificar se x foi encontrado
	if(p!=NULL&&p->elem==x)
	{
		//x está no nó p
		//fazer a remoção
		if(ant==NULL)
		{
			//2° Caso: remoção do 1° nó
			L=L->prox;
			free(p);	
		}	
		else //3° Caso: remoção do meio ou final da lista.
		{
			ant->prox=p->prox;
			free(p);
		}
	}
	return L;
}//fim função.
