/*Nome:Cíntia Braz Mesquita                      			    */
/*RA:181040931                                        			*/
/*Exercício-Programa 1 -- Busca sequencial                      */
/*Compilador:DevC++ 5.11                                		*/


int Busca_Sequencial(int v[],int n,int x){
	int m;
	m = 0;
	while(m<n && v[m] < x)m++;
	if(m<n && v[m] == x)return m+1;
	else return -1;
}

int main(){
	int i,v[100],n,x;
	printf("Digite a quantidade de numeros no vetor:\n");
	scanf("%d",&n);
	printf("Digite os valores do vetor:\n");
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	printf("Digite o valor a ser buscado:");
	scanf("%d",&x);
	printf("Posicao: %d",Busca_Sequencial(v,n,x));
	return 0;
}
