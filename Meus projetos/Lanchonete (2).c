#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float valor=0;
	int lch,mp,so,k,contcq=0,contbs=0,contbo=0,conth=0,contc=0,contr=0,contf=0,conts=0,conta=0,contsd=0,contp=0,contt=0,contcm=0;
	printf("Menu:\n");
	printf("Lanches:\n");
	printf("100-Cachorro quente: R$ 6,00\n");
	printf("101-Bauru Simples: R$ 6,50\n");
	printf("102-Bauru com ovo: R$ 7,00\n");
	printf("103-Hamburguer: R$ 6,00\n");
	printf("104-Cheeseburguer: R$ 6,50\n");
	printf("105-Batata frita: R$ 1,00\n");
	printf("\nBebidas:\n");
	printf("106-Refrigerante: R$ 5,00\n");
	printf("107-Suco: R$ 4,00\n");
	printf("108-Agua: R$ 2,00\n");
	printf("\nSobremesas:\n");
	printf("109-Sundae de chocolate: R$ 3,00\n");
	printf("110-Pudim: R$ 4,00\n");
	printf("111-Torta de chocolate: R$ 4,00\n");
	printf("112-Curau de milho: R$ 3,00\n");
	printf("Oferta:na compra de um hamburguer,um refrigerante e uma batata,voce ganha uma sobremesa da sua escolha.\n");
	printf("\n0-Compra finalizada.\n");
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
		
		case 106:printf("Refrigerante\n");
		valor+=5;
		contr+=1;
		break;
		
	    case 105:printf("Batata frita\n");
		valor+=1;
		contf+=1;
		break;
		
		case 107:printf("Suco\n");
		valor+=4;
		conts+=1;
		break; 
		
		case 108:printf("Agua\n");
		valor+=2;
		conta+=1;
		break;
		
		case 109:printf("Sundae de chocolate\n");
		valor+=3;
		contsd+=1;
		break;
		
		case 110:printf("Pudim\n");
		valor+=4;
		contp+=1;
		break;
		
		case 111:printf("Torta de chocolate\n");
		valor+=4;
		contt+=1;
		break;
		
		case 112:printf("Curau de milho\n");
		valor+=3;
		contsd+=1;
		break;
		
		case 0:lch=0 ; 
		printf("Compra finalizada\n");
		
		default:lch=0;
		break;
	    }
	} while(lch!=0);
	if(conth=contf=contr){
		printf("Oferta inclusa.\nEscolha sua sobremesa:\n");
		printf("1-Sundae de chocolate\n2-Pudim\n3-Torta de chocolate\n4-Curau de milho\n");
		scanf("%d",& so);
		if(so=1) printf("Sundae de chocolate\n");
		if(so=2) printf("Pudim\n");
	    if(so=3) printf("Torta de chocolate\n");
		if(so=4) printf("Curau de milho\n");
		}
	if(contcq>0) printf("Cachorro(s) quente(s): %d\n",contcq);
	if(contbs>0) printf("Bauru(s) simple(s): %d\n",contbs);
	if(contbo>0) printf("Bauru(s) com ovo(s): %d\n",contbo);
	if(conth>0) printf("Hamburguer(s): %d\n",conth);
	if(contc>0) printf("Cheeseburguer(s): %d\n",contc);
	if(contr>0) printf("Refrigerante(s): %d\n",contr);
    if(contf>0) printf("Batata(s) frita(s): %d\n",contf);	
    if(conts>0) printf("Suco(s): %d\n",conts);	
    if(conta>0) printf("Agua(s): %d\n",conta);	
    if(contsd>0) printf("Sundae de chocolate(s): %d\n",contsd);	
    if(contp>0) printf("Pudim(s): %d\n",contp);	
    if(contt>0) printf("Torta de chocolate(s): %d\n",contt);	
    if(contcm>0) printf("Curau de milho(s): %d\n",contcm);	
	printf("R$ %6.2f\n",valor);
	{
 	printf("Gostaria de ketchup?\n0-Nao.\n1-Sim\n");
	scanf("%d",& k);
	    if(k == 0) printf("Sem ketchup\n");
	    if(k == 1) printf("Ketchup adicionado ao pedido.\n"); 
	}
	{
	printf("Modelo de pedido:\n1-Comer aqui.\n2-Levar.\n");
	scanf("%d",& mp);
	if(mp == 1) printf("Pedido para Comer aqui\n");
	if(mp == 2) printf("Pedido para levar\n");
}
	system("pause");
	return 0;
}
