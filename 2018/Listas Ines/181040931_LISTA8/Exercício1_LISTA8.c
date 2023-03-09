/*Nome:Cíntia Braz Mesquita                          			                                             */
/*RA:181040931                                          			                                         */
/*Exercício-Programa 2 -- tempo de processamento dos algoritmos de ordenação                                 */
/*Compilador:DevC++ 5.11                                    		                                         */

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "limits.h"

void vetoraleatorio(int v[], int n){
	int i;
	for(i=0;i<n;i++)
		v[i]=(double)INT_MAX * rand()/(RAND_MAX + 1.0);	
}

double tempo(){
	return (double) clock()/CLOCKS_PER_SEC;
}

int verificaOrdem(int v[], int n){
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=n-1;j>i;j--)
			if(v[j-1]>v[j]) return 0;
	
	return 1;
}

void BubbleSort(int v[], int n){
	int i,j,aux,troca=0;
	for(i=0;i<n-1;i++)
		for(j=n-1;j>i;j--)
			if(v[j-1]>v[j])
			{
				aux=v[j];
				v[j]=v[j-1];
				v[j-1]=aux;
				troca++;
			}	
	printf("\n O número de trocas do bubble sort é %d\n",troca);
}

void Insercao(int v[], int n){
	int i,j,x,troca=0;
	
	for(i=1;i<n;i++){
		x = v[i];
		for(j=i-1;j>=0&&v[j]>x;j--){
			v[j+1] = v[j];
			troca++;
		}
			
		v[j+1] = x;	
	}
	printf("\n O número de trocas do inserção é %d\n",troca);
}

void Selecao(int v[], int n){
	int i,j,menor,ind,troca,c=0;
	for(i=0;i<n-1;i++){
		menor = v[i];
		ind = i;
		troca = 0;
		for(j=i+1;j<n;j++)
			if(v[j] < menor){
				menor = v[j];
				ind = j;
				troca = 1;
			}
		if(troca){
			v[ind] = v[i];
			v[i] = menor;	
			c++;
		}
	}
	printf("\n O número de trocas do seleção é %d\n",c);
}

void ShellSort(int v[], int n){
	int i,j,H,c,x;
	int h[] = {4,3,1};
	for(c=0;c<3;c++){
		H=h[c];
		for(i=H;i<n;i++){
			x = v[i];
			for(j=i-H;j>=0&&x<v[j];j=j-H)
				v[j+H] = v[j];
			v[j+H] = x;
		}	
	}		
}

void QuickSort(int v[], int esq, int dir){
	int i,j,aux,x;
	i = esq;
	j = dir;
	x = v[(i+j)/2];
	do{
		while(v[i] < x) i++;
		while(v[j] > x) j--;
		if(i < j){
			aux = v[i]; 
			v[i] = v[j]; 
			v[j] = aux;
			i++; j--;	
		}
		else if(i == j){i++; j--;}	
	}while(i < j);
	if(j < dir) QuickSort(v,esq,j);
	if(i < dir) QuickSort(v,i,dir);	
}

void MergeSort(int v[], int p, int r){
	int q;
	if(p < r-1){
		q = (p+r)/2;
		MergeSort(v,p,q);
		MergeSort(v,q,r);
		Intercalacao(v,p,q,r);	
	}	
}

void Intercalacao(int v[], int p, int q, int r){
	int i,j,k;
	int C[r-p];
	i = p;
	j = q;
	k = 0;
	while(i < q  &&  j < r)
		if(v[i] <= v[j]) C[k++] = v[i++];
		else C[k++] = v[j++];
	while(i < q) C[k++] = v[i++];
	while(j < r) C[k++] = v[j++];
	for(i=0;i<k;i++)
		v[i+p] = C[i];		
}

int BuscaSequencial(int v[], int n, double x){
	int m;
	m = 0;
	while(m < n  &&  v[m] < x) m++;
	if(m < n  &&  v[m] == x) return m;
	else return -1;
}

int BuscaBinaria(int v[], int n, int x){
	int e = 0,d,m;
	d = n-1;
	while(e <= d)
	{
		m = (e+d)/2;
		if(v[m] == x) return m;
		else if(x < v[m]) d = m-1;
		else e = m+1;	
	}
	return -1;
}

int main()
{
	
	int n,i,opcao,numero,v[100000],flag1=0,flag2=0,c=0,d=0,pos;
	double t1,t2,tt1,tt2,duracao;
	
	printf("\n Qual o limite maximo de tempo do programa?:");
	scanf("%lf",&duracao);
	printf("\n Duracao dos testes = %.2f segundos\n",duracao);
	
	printf("\n Escolha o algoritmo a ser utilizado:\n");
	printf("\n Bolha <1>");
	printf("\n Selecao <2>");
	printf("\n Insercao <3>");
	printf("\n Shell Sort <4>");
	printf("\n Mergesort <5>");
	printf("\n Quicksort <6>");
	printf("\n Todos os metodos <7>");
	printf("\n");
	scanf("%d",&opcao);
	numero=(double) INT_MAX*rand()/(RAND_MAX+1.0);
	printf("\n Numero a ser procurado: %d \n",numero);
	
	
	switch (opcao)
	{
		case 1: 
		{
			printf("\n Bolha: \n");
			for(i=2000;tt1<duracao&&tt2<duracao;i=i+2000)
			{
				vetoraleatorio(v,i);
				t1=tempo();
				BuscaSequencial(v,i,numero);		
				t2=tempo();
				tt1=t2-t1;
				t1=tempo();
				BubbleSort(v,i);
				if(verificaOrdem(v,i)==1) puts("\n O vetor esta ordenado. \n");
				else puts("\n O vetor não esta ordenado. \n");
				BuscaBinaria(v,i,numero);
				t2=tempo();
				tt2=t2-t1;
				printf("\n Tempo da Busca Binaria: %f \n",tt2);
				if(tt1<tt2) c++;
				else if(tt2<tt1) d++;
				if((flag1=0&&c!=0)||(flag2=0&&d!=0))
				{
					if(flag1=1) {flag2=1;pos=i;}
					if(flag2=1) {flag1=1;pos=i;}
					if(c!=0) flag1=1;
					if(d!=0) flag2=1;
				}
			}
			if(c>d&&d!=0) printf("\n A Busca Sequencial eh uma melhor opcao do que a Busca Binaria ate o tamanho do vetor ser por volta de %d\n",pos);
			else if(d>c&&c!=0) printf("\n A Busca Binaria eh uma melhor opcao do que a Busca Sequencial ate o tamanho do vetor ser por volta de %d\n",pos);
			else if(c>d&&d==0) puts("\n A Busca Sequencial eh a melhor opcao em todos os casos analisados.\n");
			else if(d>c&&c==0) puts("\n A Busca Binaria eh a melhor opcao em todos os casos analisados.\n");
			break;
		}
		case 2: 
		{
			printf("\n Selecao: \n");
			for(i=2000;tt1<duracao&&tt2<duracao;i=i+2000)
			{
				vetoraleatorio(v,i);
				t1=tempo();
				BuscaSequencial(v,i,numero);		
				t2=tempo();
				tt1=t2-t1;
				t1=tempo();
				Selecao(v,i);
				if(verificaOrdem(v,i)==0) puts("\n O vetor esta ordenado. \n");
				else puts("\n O vetor não está ordenado. \n");
				BuscaBinaria(v,i,numero);
				t2=tempo();
				tt2=t2-t1;
				printf("\n Tempo Binária: %f \n",tt2);
				if(tt1<tt2) c++;
				else if(tt2<tt1) d++;
				if((flag1=0&&c!=0)||(flag2=0&&d!=0))
				{
					if(flag1=1) {flag2=1;pos=i;}
					if(flag2=1) {flag1=1;pos=i;}
					if(c!=0) flag1=1;
					if(d!=0) flag2=1;
				}
			}
			if(c>d&&d!=0) printf("\n A Busca Sequêncial vale mais a pena que a Busca Binária até o tamanho do vetor ser por volta de %d\n",pos);
			else if(d>c&&c!=0) printf("\n A Busca Binária vale mais a pena que a Busca Sequêncial até o tamanho do vetor ser por volta de %d\n",pos);
			else if(c>d&&d==0) puts("\n A Busca Sequêncial vale mais a pena em todos os casos analisados.\n");
			else if(d>c&&c==0) puts("\n A Busca Binária vale mais a pena em todos os casos analisados.\n");
			break;
		}
		case 3: {
			printf("\n Inserção: \n");
			for(i=2000;tt1<duracao&&tt2<duracao;i=i+2000)
			{
				vetoraleatorio(v,i);
				t1=tempo();
				BuscaSequencial(v,i,numero);		
				t2=tempo();
				tt1=t2-t1;
				t1=tempo();
				Insercao(v,i);
				if(verificaOrdem(v,i)==1) puts("\n O vetor está ordenado. \n");
				else puts("\n O vetor não está ordenado. \n");
				BuscaBinaria(v,i,numero);
				t2=tempo();
				tt2=t2-t1;
				printf("\n Tempo Binária: %f \n",tt2);
				if(tt1<tt2) c++;
				else if(tt2<tt1) d++;
				if((flag1=0&&c!=0)||(flag2=0&&d!=0))
				{
					if(flag1=1) {flag2=1;pos=i;}
					if(flag2=1) {flag1=1;pos=i;}
					if(c!=0) flag1=1;
					if(d!=0) flag2=1;
				}
			}
			if(c>d&&d!=0) printf("\n A Busca Sequêncial vale mais a pena que a Busca Binária até o tamanho do vetor ser por volta de %d\n",pos);
			else if(d>c&&c!=0) printf("\n A Busca Binária vale mais a pena que a Busca Sequêncial até o tamanho do vetor ser por volta de %d\n",pos);
			else if(c>d&&d==0) puts("\n A Busca Sequêncial vale mais a pena em todos os casos analisados.\n");
			else if(d>c&&c==0) puts("\n A Busca Binária vale mais a pena em todos os casos analisados.\n");
			break;
		}
		case 4:{
			printf("\n Shell Sort: \n");
			for(i=2000;tt1<duracao&&tt2<duracao;i=i+2000)
			{
				vetoraleatorio(v,i);
				t1=tempo();
				BuscaSequencial(v,i,numero);		
				t2=tempo();
				tt1=t2-t1;
				t1=tempo();
				ShellSort(v,i);
				if(verificaOrdem(v,i)==1) puts("\n O vetor está ordenado. \n");
				else puts("\n O vetor não está ordenado. \n");
				BuscaBinaria(v,i,numero);
				t2=tempo();
				tt2=t2-t1;
				printf("\n Tempo Binária: %f \n",tt2);
				if(tt1<tt2) c++;
				else if(tt2<tt1) d++;
				if((flag1=0&&c!=0)||(flag2=0&&d!=0))
				{
					if(flag1=1) {flag2=1;pos=i;}
					if(flag2=1) {flag1=1;pos=i;}
					if(c!=0) flag1=1;
					if(d!=0) flag2=1;
				}
			}
			if(c>d&&d!=0) printf("\n A Busca Sequêncial vale mais a pena que a Busca Binária até o tamanho do vetor ser por volta de %d\n",pos);
			else if(d>c&&c!=0) printf("\n A Busca Binária vale mais a pena que a Busca Sequêncial até o tamanho do vetor ser por volta de %d\n",pos);
			else if(c>d&&d==0) puts("\n A Busca Sequêncial vale mais a pena em todos os casos analisados.\n");
			else if(d>c&&c==0) puts("\n A Busca Binária vale mais a pena em todos os casos analisados.\n");
			break;
		}
		case 5:{
			printf("\n Merge Sort: \n");
			for(i=2000;tt1<duracao&&tt2<duracao;i=i+2000)
			{
				vetoraleatorio(v,i);
				t1=tempo();
				BuscaSequencial(v,i,numero);		
				t2=tempo();
				tt1=t2-t1;
				t1=tempo();
				MergeSort(v,0,i);
				if(verificaOrdem(v,i)==1) puts("\n O vetor está ordenado. \n");
				else puts("\n O vetor não está ordenado. \n");
				BuscaBinaria(v,i,numero);
				t2=tempo();
				tt2=t2-t1;
				printf("\n Tempo Binária: %f \n",tt2);
				if(tt1<tt2) c++;
				else if(tt2<tt1) d++;
				if((flag1=0&&c!=0)||(flag2=0&&d!=0))
				{
					if(flag1=1) {flag2=1;pos=i;}
					if(flag2=1) {flag1=1;pos=i;}
					if(c!=0) flag1=1;
					if(d!=0) flag2=1;
				}
			}
			if(c>d&&d!=0) printf("\n A Busca Sequêncial vale mais a pena que a Busca Binária até o tamanho do vetor ser por volta de %d\n",pos);
			else if(d>c&&c!=0) printf("\n A Busca Binária vale mais a pena que a Busca Sequêncial até o tamanho do vetor ser por volta de %d\n",pos);
			else if(c>d&&d==0) puts("\n A Busca Sequêncial vale mais a pena em todos os casos analisados.\n");
			else if(d>c&&c==0) puts("\n A Busca Binária vale mais a pena em todos os casos analisados.\n");
			break;
		}
		case 6: {
			printf("\n Quicksort: \n");
			for(i=2000;tt1<duracao&&tt2<duracao;i=i+2000)
			{
				vetoraleatorio(v,i);
				t1=tempo();
				BuscaSequencial(v,i,numero);		
				t2=tempo();
				tt1=t2-t1;
				t1=tempo();
				QuickSort(v,0,i-1);
				if(verificaOrdem(v,i)==1) puts("\n O vetor está ordenado. \n");
				else puts("\n O vetor não está ordenado. \n");
				BuscaBinaria(v,i,numero);
				t2=tempo();
				tt2=t2-t1;
				printf("\n Tempo Binária: %f \n",tt2);
				if(tt1<tt2) c++;
				else if(tt2<tt1) d++;
				if((flag1=0&&c!=0)||(flag2=0&&d!=0))
				{
					if(flag1=1) {flag2=1;pos=i;}
					if(flag2=1) {flag1=1;pos=i;}
					if(c!=0) flag1=1;
					if(d!=0) flag2=1;
				}
			}
			if(c>d&&d!=0) printf("\n A Busca Sequêncial vale mais a pena que a Busca Binária até o tamanho do vetor ser por volta de %d\n",pos);
			else if(d>c&&c!=0) printf("\n A Busca Binária vale mais a pena que a Busca Sequêncial até o tamanho do vetor ser por volta de %d\n",pos);
			else if(c>d&&d==0) puts("\n A Busca Sequêncial vale mais a pena em todos os casos analisados.\n");
			else if(d>c&&c==0) puts("\n A Busca Binária vale mais a pena em todos os casos analisados.\n");
			break;
		}
		case 7:{
			break;
		}	
	}		
}
