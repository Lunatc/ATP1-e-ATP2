/*Nome:C�ntia Braz Mesquita                          			 */
/*RA:181040931                                       			 */
/*Exerc�cio-Programa 4 -- C�lculo do mdc de n numeros*/
/*Compilador:DevC++ 5.11  										 */


#include<stdio.h>
#include<stdlib.h>

/*a)*/	int fMDC(int a,int b){
  		if(b == 0) return a;
  		
		else return fMDC(b, a % b);
	}	
	
/*b)*/	int main(){
		int n,i,a,b,c,mdc;
		printf("Digite o n�mero de valores a serem digitados:");
		scanf("%d",&n);
		printf("Digite os valores:");
		scanf("%d%d",&a,&b);
			mdc = fMDC(a,b);
		for(i = 0;i < n-2;i++){
			scanf("%d",&c);
			if(c % mdc != 0){
				a = mdc;
				b = c;
				mdc = fMDC(a,b);
			}
		}
		printf("%d",mdc);
	
	}
