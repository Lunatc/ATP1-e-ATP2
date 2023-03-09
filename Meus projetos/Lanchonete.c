#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float valor=0;
	int lch,contcq=0,contbs=0,contbo=0,conth=0,contc=0,contr=0,contf=0,conts=0;
	printf("Menu:\n");
	printf("100-Cachorro quente: R$ 6,00\n");
	printf("101-Bauru Simples: R$ 6,50\n");
	printf("102-Bauru com ovo: R$ 7,00\n");
	printf("103-Hamburguer: R$ 6,00\n");
	printf("104-Cheeseburguer: R$ 6,50\n");
	printf("105-Refrigerante: R$ 5,00\n");
	printf("106-Batata frita: R$ 1,00\n");
	printf("107-Suco: R$ 4,00\n");
	printf("0-Compra finalizada.\n");
	do {
	scanf("%d",& lch);
	switch(lch){
		
	  	case 100:printf("Cachorro quente\n");
		valor+=6;
		contcq+=1;
		break;
		
		case 101:printf("Bauru Simples\n");
		valor+=6.5;
		contbs+=1;
		break;
		
		case 102:printf("Bauru com ovo\n");
		valor+=7;
		contbo+=1;
		break;
		
		case 103:printf("Hamburguer\n");
		valor+=6;
		conth+=1;
		break;
		
		case 104:printf("Cheeseburguer\n");
		valor+=6.5;
		contc+=1;
		break;
		
		case 105:printf("Refrigerante\n");
		valor+=5;
		contr+=1;
		break;
		
	    case 106:printf("Batata frita\n");
		valor+=1;
		contf+=1;
		break;
		
		case 107:printf("Suco\n");
		valor+=4;
		conts+=1;
		break; 
		
		case 0:lch=0 ; 
		printf("Compra finalizada\n");
		
		default:lch=0;
		break;
	    }
	} while(lch!=0);
	if(contcq>0) printf("Cachorro(s) quente(s): %d\n",contcq);
	if(contbs>0) printf("Bauru(s) simple(s): %d\n",contbs);
	if(contbo>0) printf("Bauru(s) com ovo(s): %d\n",contbo);
	if(conth>0) printf("Hamburguer(s): %d\n",conth);
	if(contc>0) printf("Cheeseburguer(s): %d\n",contc);
	if(contr>0) printf("Refrigerante(s): %d\n",contr);
    if(contf>0) printf("Batata(s) frita(s): %d\n",contf);	
    if(conts>0) printf("Suco(s): %d\n",conts);	
	printf("R$ %6.2f\n",valor);
	system("pause");
	return 0;
}
