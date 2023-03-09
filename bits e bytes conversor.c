#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese"); 
	int unidade1,unidade2;
	float sg,min,hr,dia,sm,mes,ano,dec,sec,mln;
	printf("Conversor de tempo:   ");
	printf("\n   1-Segundos.\n   2-Minutos.\n   3-Horas.\n   4-Dias.\n   5-Semanas.\n   6-Meses(de 30 dias).\n   7-Anos.\n   8-D�cadas.\n   9-S�culos.\n   10-Mil�nios.\n");
	printf("Obs: Devido � problemas de tamnho de resultado,n�o � possivel converter segundos para anos em seguinte,da mesma forma minutos para d�cadas em seguinte.");
	printf("\n\nEscolha a unidade do valor apresentado:");
	scanf("%d",&unidade1);
	printf("Escolha a unidade do valor final:");
	scanf("%d",&unidade2);
	if (unidade1 == 1 && unidade2 == 2){
		printf("\nConvers�o de Segundos para minutos.\nDigite o valor a ser convertido:   ");
		scanf("%f",&sg);
		min = sg/60;
		printf("%f",min);
	}
	if (unidade1 == 1 && unidade2 == 3){
		printf("\nConvers�o de Segundos para horas.\nDigite o valor a ser convertido:   ");
		scanf("%f",&sg);
		hr = sg/3600;
		printf("%f",hr);
	}
	if (unidade1 == 1 && unidade2 == 4){
		printf("\nConvers�o de Segundos para dias.\nDigite o valor a ser convertido:   ");
		scanf("%f",&sg);
		dia = sg/86400;
		printf("%f",dia);
	}
	if (unidade1 == 1 && unidade2 == 5){
		printf("\nConvers�o de Segundos para semanas.\nDigite o valor a ser convertido:   ");
		scanf("%f",&sg);
		sm = sg/604800;
		printf("%f",sm);
	}
	if (unidade1 == 1 && unidade2 == 6){
		printf("\nConvers�o de Segundos para meses.\nDigite o valor a ser convertido:   ");
		scanf("%f",&sg);
		mes = sg/2592000;
		printf("%f",mes);
	}
	if (unidade1 == 1 && unidade2 == 7){
		printf("\nConvers�o de Segundos para anos.\nResultado muito grande,n�o � poss�vel converter.");
	}
	if (unidade1 == 1 && unidade2 == 8){
		printf("\nConvers�o de Segundos para d�cadas.\nResultado muito grande,n�o � poss�vel converter.");
	}
	if (unidade1 == 1 && unidade2 == 9){
			printf("\nConvers�o de Segundos para s�culos.\nResultado muito grande,n�o � poss�vel converter.");
	}
	if (unidade1 == 1 && unidade2 == 10){
			printf("\nConvers�o de Segundos para mil�nios.\nResultado muito grande,n�o � poss�vel converter.");
	}
	if (unidade1 == 2 && unidade2 == 1){
		printf("\nConvers�o de minutos para segundos.\nDigite o valor a ser convertido:   ");
		scanf("%f",&min);
		sg = min * 60;
		printf("%f",sg);
	}
	if (unidade1 == 2 && unidade2 == 3){
		printf("\nConvers�o de minutos para horas.\nDigite o valor a ser convertido:   ");
		scanf("%f",&min);
		hr = min/60;
		printf("%f",hr);
	}
	if (unidade1 == 2 && unidade2 == 4){
		printf("\nConvers�o de minutos para dias.\nDigite o valor a ser convertido:   ");
		scanf("%f",&min);
		dia = min/1440;
		printf("%f",dia);
	}
	if (unidade1 == 2 && unidade2 == 5){
		printf("\nConvers�o de minutos para semanas.\nDigite o valor a ser convertido:   ");
		scanf("%f",&min);
		sm = min/10080;
		printf("%f",sm);
	}
	if (unidade1 == 2 && unidade2 == 6){
		printf("\nConvers�o de minutos para meses.\nDigite o valor a ser convertido:   ");
		scanf("%f",&min);
		mes = min/43800;
		printf("%f",mes);
	}
	if (unidade1 == 2 && unidade2 == 7){
		printf("\nConvers�o de minutos para anos.\nDigite o valor a ser convertido:   ");
		scanf("%f",&min);
		ano = min/525600;
		printf("%f",ano);
	}
	if (unidade1 == 2 && unidade2 == 8){
		printf("\nConvers�o de minutos para d�cadas.\nDigite o valor a ser convertido:   ");
		scanf("%f",&min);
		dec = min/5256000;
		printf("%f",dec);
	}
	if (unidade1 == 2 && unidade2 == 9){
			printf("\nConvers�o de minutos para s�culos.\nResultado muito grande,n�o � poss�vel converter.");
	}
	if (unidade1 == 1 && unidade2 == 10){
			printf("\nConvers�o de minutos para mil�nios.\nResultado muito grande,n�o � poss�vel converter.");
	}
	if (unidade1 == 3 && unidade2 == 1){
		printf("\nConvers�o de horas para segundos.\nDigite o valor a ser convertido:   ");
		scanf("%f",&hr);
		sg = hr * 3600;
		printf("%f",sg);
	}
	if (unidade1 == 3 && unidade2 == 2){
		printf("\nConvers�o de horas para minutos.\nDigite o valor a ser convertido:   ");
		scanf("%f",&hr);
		min = hr * 60;
		printf("%f",min);
	}
	if (unidade1 == 3 && unidade2 == 4){
		printf("\nConvers�o de horas para dias.\nDigite o valor a ser convertido:   ");
		scanf("%f",&hr);
		dia = hr/24;
		printf("%f",dia);
	}
	if (unidade1 == 3 && unidade2 == 5){
		printf("\nConvers�o de horas para semanas.\nDigite o valor a ser convertido:   ");
		scanf("%f",&hr);
		sm = hr/168;
		printf("%f",sm);
	}
	if (unidade1 == 3 && unidade2 == 6){
		printf("\nConvers�o de horas para meses.\nDigite o valor a ser convertido:   ");
		scanf("%f",&hr);
		mes = hr/730;
		printf("%f",mes);
	}
	if (unidade1 == 3 && unidade2 == 7){
		printf("\nConvers�o de horas para anos.\nDigite o valor a ser convertido:   ");
		scanf("%f",&hr);
		ano = hr/8760;
		printf("%f",ano);
	}
	if (unidade1 == 3 && unidade2 == 8){
		printf("\nConvers�o de horas para d�cadas.\nDigite o valor a ser convertido:   ");
		scanf("%f",&hr);
		dec = hr/87600;
		printf("%f",dec);
	}
	if (unidade1 == 3 && unidade2 == 9){
		printf("\nConvers�o de horas para s�culos.\nDigite o valor a ser convertido:   ");
		scanf("%f",&hr);
		sec = hr/876000;
		printf("%f",sec);
	}
	if (unidade1 == 3 && unidade2 == 10){
		printf("\nConvers�o de horas para mil�nios.\nDigite o valor a ser convertido:   ");
		scanf("%f",&hr);
		mln = hr/8760000;
		printf("%f",mln);
	}
	return 0;
}
