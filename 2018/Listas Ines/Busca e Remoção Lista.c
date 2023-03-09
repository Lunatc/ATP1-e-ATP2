//5 - Busca e Remo��o
//Escrever uma fun��o que recebe uma lista encadeada L e um elemento x e remove de L o primeiro n� que contiver o elemento x. Caso x n�o esteja na lista, a fun��o n�o remove nenhum n�.
//a) Lista com n� de cabe�alho.

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
	if(p!=NULL) //x foi encontrado no n� p
	{
		ant->prox=p->prox;
		free(p);
	}	
}//fim fun��o

//b) Lista pura, sem n� de cabe�alho.
//1� Caso: lista vazia => nada a fazer.
//2� Caso: Remo��o do 1� n� da lista.
//3� Caso: Remo��o de um n� do meio ou final da lista.

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
	if(p!=NULL) //x foi encontrado no n� p
	{
		if(ant==NULL) //1� Caso: remo��o do 1� elemento da lista L.
		{
			L=L->prox;
			free(p);	
		}
		else //3� Caso: remo��o de um n� do meio ou final da lista.
		{
			ant->prox=p->prox;
			free(p);
		}
	}
	return L;
}//fim fun��o

//6 - Opera��o de Busca e inser��o em uma lista encadeada sem cabe�a e ordenada (ordem crescente)
//(a) - Busca: localiza-se a posi��o de inser��o , considerando a informa��o de lista ordenada.
//(b) - Inser��o: id�ntico � inser��o da aula anterior.
//1� Caso: �\_(?)_/�
//2� Caso: Inser��o de um n� no in�cio da lista L.
//3� Caso: Inser��o no meio ou no final da lista. Neste caso o ponteiro de in�cio da lista n�o se altera.

lista *BuscaInsereOrdenadaP(lista *L, int x)
{
	lista *NOVO,*ant,*p;
	NOVO=(lista*)malloc(sizeof(lista));
	NOVO->elem=x;
	if(L==NULL) //1� Caso: lista vazia
	{
		NOVO->prox=NULL;
		L=NOVO;	
	}
	else
	{
		//localiar a posi��o de inser��o na lista ordenada
		ant=NULL;
		p=L;
		while(p!=NULL&&p->elem<=x)
		{
			ant=p;
			p=p->prox;
		}
		if(ant==NULL) //2� Caso: inser��o no in�cio da lista.
		{
			NOVO->prox=L;
			L=NOVO; //mudan�a do endere�o do n� inicial de L.
		}
		else //3� Caso: inser��o no meio ou final da lista.
		{
			NOVO->prox=p;
			ant->prox=NOVO;
		}	
	}
	return L;	
}

//6 - Busca e remo��o de um elemento em uma lista ordenada sem n� de cabe�alho.
//(a) Busca: encontrar o elemento a ser eliminado, usando a informa��o de lista ordenada.
//(b) Remo��o: O processo id�ntico � busca e remo��o anterior.
//Casos a serem avaliados:
//1� Caso: lista vazia (a fun��o retorna sem fazer nada).
//2� Caso: remo��o do 1� elemento da lista.
//3� Caso: remo��o do meio ou final da lista.

lista *BuscaRemoveOrdenadaP(lista *, int x)
{
	lista *ant,*p;
	if(L==NULL) return L; //1� Caso: lista vazia
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
		//x est� no n� p
		//fazer a remo��o
		if(ant==NULL)
		{
			//2� Caso: remo��o do 1� n�
			L=L->prox;
			free(p);	
		}	
		else //3� Caso: remo��o do meio ou final da lista.
		{
			ant->prox=p->prox;
			free(p);
		}
	}
	return L;
}//fim fun��o.
