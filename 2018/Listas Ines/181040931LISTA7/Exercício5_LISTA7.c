/*Nome:Cíntia Braz Mesquita                          			    */
/*RA:181040931                                          			*/
/*Exercício-Programa 5 -- Funçao medir tempo                        */
/*Compilador:DevC++ 5.11                                    		*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>

double tempo(){
	return (double) clock()/CLOCKS_PER_SEC;
}

int main (){
	unsigned long long int v[100000],i,j,k;
	double t1,t2,t3;
	
	t1 = tempo();
	for(i=0;i<10000;i++){
		printf("%d\n",i);
	}
	
	t2 = tempo();
	t3 = t2 - t1;
	printf("\n\n\nTime:%f",t3);
}
