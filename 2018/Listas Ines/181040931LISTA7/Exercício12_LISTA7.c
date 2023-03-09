/*Nome:Cíntia Braz Mesquita                          		        	       			*/
/*RA:181040931                                                  			 			*/
/*Exercício-Programa 12 -- Algoritmo organizar letras                                   */
/*Compilador:DevC++ 5.11                                    		        			*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>


void Bubblesort1(char v[], int n){
	int i,j;
	char aux;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(v[j-1] > v[j]){
					aux = v[j];
					v[j] = v[j-1];
					v[j-1] = aux;
			}
		}		
	}		
}

void Bubblesort2(int v[], int n){
	int i,j,aux;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(v[j-1]>v[j])
			{
				aux=v[j];
				v[j]=v[j-1];
				v[j-1]=aux;
			}
		}		
	}	
}

void brancos(char texto[]){
	char textbr[50];
	int i,j=0,k=0,a,b;
	
	a = strlen(texto);
	
	for(i=0;i<a;i++)
		if(texto[i]!=' ')
		{
			textbr[j]=texto[i];
			j++;
			if(texto[i+1]==' ')
			{
				textbr[j]=texto[i+1];
				j++;
			}
		}
	
	b=strlen(textbr);
	
	for(i=0;i<b;i++) texto[i] = textbr[i];
	texto[b-2]='\0';
}

void Ord_Qntd_Ocorr(char v[], int v2[]){
	int i,c = 1,f = 0,n,j,d,v3[50],e = 0,flag = 0,aux2;
	char aux;
	
	n = strlen(v);
	
	for(i=0;i<n;i++){
		if(v[i] == v[i+1])
			c++;
		else{
			d=i;
			for(j=c;j>0;j--){
				v2[d] = c;
				d--;
			}		
			c = 1;
		} 		
	}
	for(i=0;i<n;i++) v3[i] = v2[i];
	Bubblesort2(v3,n);
	
	for(i=0;i<n;i++){
		for(j=f;j<n&&flag==0;j++){
			if(v2[j]==v3[i]){	
				aux=v[e];
				aux2=v2[e];
				v[e]=v[j];
				v2[e]=v2[j];
				v[j]=aux;
				v2[j]=aux2;
				e++;
				flag=1;
			}
		}
		flag=0;
		f++;	
	}
			
	for(i=0;i<n;i++) printf("%d ",v2[i]);
	printf("\n");	
}

int main()
{
	
	char v[50];
	int i,v2[50],n;
	
	puts("Insira o texto.");
	scanf("%[^\n]",v);
	getchar();
	
	n = strlen(v);
	
	Bubblesort1(v,n);
	
	brancos(v);
	
	Ord_Qntd_Ocorr(v,v2);
	
	printf("%s",v);		
}
