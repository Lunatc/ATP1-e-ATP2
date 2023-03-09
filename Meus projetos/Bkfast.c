#include<stdlib.h>
#include<stdio.h>
#include <string.h>

int main(){
	int oat,ygt,bna,mlk,tea,tst,lbd,jly,egg,bsu,cnm,pnb,fmt,wch,juc;
	char aws1[3],aws2[2];
	char aws0[3];

	strcpy(aws1,"yes");
	strcpy(aws2,"no");
	
	printf("Breakfast planning. \n\n\n");
	printf("Let's begin with some questions.\n");
	printf("Answer only yes or no for each question.\n");{
	printf("Do you have overnight?:   ");{
		scanf("%s",aws0);
		if(strcmp(aws0,aws1) == 0){
	printf("Then you already know your breakfast for the day."); 
		return 0;};
	if (strcmp(aws0,aws2) == 0) printf("Okay,let's keep going.");
	}

	printf("\nDo you have oat?");{
	scanf("%s",aws0);
	if(strcmp(aws0,aws1) == 0){
		oat = 1;};
	if(strcmp(aws0,aws2) == 0){
		oat = 0;};
	}

	printf("Do you have yogurt?");{
	scanf("%s",aws0);
	if(strcmp(aws0,aws1) == 0){
		ygt = 1;};
	if(strcmp(aws0,aws2) == 0){
		ygt = 0;};	
	}
	
	printf("Do you have banana?");{
	scanf("%s",aws0);
	if(strcmp(aws0,aws1) == 0){
		bna = 1;};
	if(strcmp(aws0,aws2) == 0){
		bna = 0;};	
	}
	
	printf("Do you have milk?");{
	scanf("%s",aws0);
	if(strcmp(aws0,aws1) == 0){
		mlk = 1;};
	if(strcmp(aws0,aws2) == 0){
		mlk = 0;};	
	}
	
	printf("Do you have tea?");{
	scanf("%s",aws0);
	if(strcmp(aws0,aws1) == 0){
		tea = 1;};
	if(strcmp(aws0,aws2) == 0){
		tea = 0;};	
	}
	
	printf("Do you have toast?");{
	scanf("%s",aws0);
	if(strcmp(aws0,aws1) == 0){
		tst = 1;};
	if(strcmp(aws0,aws2) == 0){
		tst = 0;};	
	}
	
	printf("Do you have loaf bread?");{
	scanf("%s",aws0);
	if(strcmp(aws0,aws1) == 0){
		lbd = 1;};
	if(strcmp(aws0,aws2) == 0){
		lbd = 0;};	
	}
	
	printf("Do you have jelly?");{
	scanf("%s",aws0);
	if(strcmp(aws0,aws1) == 0){
		jly = 1;};
	if(strcmp(aws0,aws2) == 0){
		jly = 0;};	
	}
	
	printf("Do you have eggs?");{
	scanf("%s",aws0);
	if(strcmp(aws0,aws1) == 0){
		egg = 1;};
	if(strcmp(aws0,aws2) == 0){
		egg = 0;};	
	}
	
	printf("Do you have brown sugar?");{
	scanf("%s",aws0);
	if(strcmp(aws0,aws1) == 0){
		bsu = 1;};
	if(strcmp(aws0,aws2) == 0){
		bsu = 0;};	
	}
	
	printf("Do you have cinnamon?");{
	scanf("%s",aws0);
	if(strcmp(aws0,aws1) == 0){
		cnm = 1;};
	if(strcmp(aws0,aws2) == 0){
		cnm = 0;};	
	}
	
	printf("Do you have peanut butter?");{
	scanf("%s",aws0);
	if(strcmp(aws0,aws1) == 0){
		pnb = 1;};
	if(strcmp(aws0,aws2) == 0){
		pnb = 0;};	
	}
	printf("Do you have ferment?");{
	scanf("%s",aws0);
	if(strcmp(aws0,aws1) == 0){
		fmt = 1;};
	if(strcmp(aws0,aws2) == 0){
		fmt = 0;};	
	}
	printf("Do you have white cheese?");{
	scanf("%s",aws0);
	if(strcmp(aws0,aws1) == 0){
		wch = 1;};
	if(strcmp(aws0,aws2) == 0){
		wch = 0;};	
	}
	
	printf("Do you have juice?");{
	scanf("%s",aws0);
	if(strcmp(aws0,aws1) == 0){
		juc = 1;};
	if(strcmp(aws0,aws2) == 0){
		juc = 0;};	
	}
	
	}
	printf("\nYour meal options are:  ");
	
	printf("\nBase:\n");
	if(bna == 1 && bsu == 1 && cnm == 1)printf("\n-Hot banana with brown sugar and cinnamon");
	if(tst == 1){
		if(wch == 1) printf("\n-Toast with white cheese");
		if(jly == 1) {
			if(pnb == 1) printf("\n-Toast with jelly and peanut butter");
			else printf("\n-Toast with jelly");};		
	};
	if(lbd == 1){
		if(jly == 1) {
			if(pnb == 1) printf("\n-Loaf bread with jelly and peanut butter");
			else printf("\n-Loaf bread with jelly");};		
		if(egg == 1) printf("\n-Loaf bread with egg");
		if(wch == 1) printf("\n-Loaf bread with white cheese");
	};
	if(egg ==1 && bna == 1 && oat == 1 && cnm ==1 && fmt ==1)printf("\n-Banana pancake");
	if(egg == 1)printf("\n-Omelet");
	printf("\n\nDrink:\n\n");
	if(ygt == 1 ){
		if(oat == 1 ){
			if(pnb == 1) printf("-Yogurt with oat and peanut butter.");
			else printf("-Yogurt with oat");
		}
		else printf("-Yogurt");
	};
	if(mlk == 1){
		if(oat ==1 && bna == 1)printf("\n-Banana shake");
		if(tea == 1)printf("\n-Tea with milk");
		printf("\n-A cup of milk");
		};
	if(tea ==1)printf("\n-Tea");
	if(juc == 1 ) printf("\n-Juice");
	printf("\n\n Single meal options:\n");
	if( oat == 1 && mlk == 1)printf("-Oat porridge\n");
	system("pause");	
return 0;
}
