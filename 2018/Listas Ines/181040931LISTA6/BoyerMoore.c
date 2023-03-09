/*Nome:Cíntia Braz Mesquita                      			    */
/*RA:181040931                                        			*/
/*Exercício-Programa 3 -- Permutações circulares                */
/*Compilador:DevC++ 5.11                                		*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int BoyerMoore(char *a, char *b){
    int i, j, k, ocorrencia, tamanho, n, m,pos[200];
    int ult[256];
    tamanho = strlen(a);
    n = strlen(b);
    
    //preprocessamento da palavra a
    for(i = 0; i < 256; i++) ult[i] = -1;
    //percorrer a palavra a guardar os indices de onde a letra ocorre
    for(i = 0; i < tamanho; i++) ult[a[i]] = i;
    
    //varredura do texto
    for(k = tamanho-1;  k < n; k = tamanho - ult[b[k+1]]){
        //varredura da palavra
        for(i = tamanho-1, j = k; i >=0; i--, j--) if(a[i] != b[j]) break;
        if(i < 0) {
       		ocorrencia++;
				
		}
    }
    return ocorrencia;
}


