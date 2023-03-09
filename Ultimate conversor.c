//conversao de binario

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese"); 
	int tipo,modo1,modo2,modo3,modo4,modo5,modo6,modo7,modo9,unidade11,unidade21,unidade1,unidade2;
	float c,f,k,kmh,ms,mlh,no,rad,grs,pi=3.14,km,ml,pl,cm,jd,m,m2,acr,hect,kg,lb,m3,lt,b,by,kb,mb,gb;
	double sg,min,hr,dia,sm,mes,ano,dec,sec,mln;
	printf("Bem vindo ao Ultimate Conversor,aqui você pode converter qualquer unidade requisitada.\n");
	do{
		printf("\n\nEscolha o tipo de conversão a ser utilizado:   ");
		printf("\n1-Temperatura.\n2-Velocidade.\n3-Ângulo.\n4-Comprimento.\n5-Área.\n6-Massa.\n7-Volume.\n8-Armazenamento de dados.\n9-Tempo.\n0-Finalizar programa.\n");
		scanf("%d",&tipo);
		switch(tipo){
			case 1:
				printf("   Conversão de temperatura.\n    ");
				printf("\n   Digite o número do modo de conversão escolhida:    ");
				printf("\n   1-Celcius para Kelvin.\n   2-Kelvin para Celcius.\n   3-Celcius para Fahrenheit.\n   4-Fahrenheit para Celcius.\n   5-Kelvin para Fahrenheit.\n   6-Fahrenheit para Kelvin.\n");
				scanf("%d",&modo1);
				switch(modo1){
					case 1:
						printf("Digite o valor em Celcius a ser convertido para Kelvin:   ");
						scanf("%f",& c);
						k = c + 273.15;
						printf("%.2f k",k);
						break;
					case 2:
						printf("Digite o valor em Kelvin a ser convertido para Celcius:   ");
						scanf("%f",& k);
						c = k - 273.15;
						printf("%.2f c",c);
						break;
					case 3:
						printf("Digite o valor em Celcius a ser convertido para Fahrenheit:   ");
						scanf("%f",& c);
						f = c * (9.0 / 5.0)+ 32.0;
						printf("%.2f f",f);
						break;
					case 4:
						printf("Digite o valor em Fahrenheit a ser convertido para Celcius:   ");
						scanf("%f",& f);
						c = 5.0 * (f- 32.0)/ 9.0 ; 
						printf("%.2f c",c);
						break;
					case 5:
						printf("Digite o valor em Kelvin a ser convertido para Fahrenheit:   ");
						scanf("%f",& k);
						f = 32 + (9 * (k - 273 ) / 5 );
						printf("%.2f f",f);
						break;
					case 6:
						printf("Digite o valor em Fahrenheit a ser convertido para Kelvin:   ");
						scanf("%f",& f);
						k = 273 + ( 5* (f-32) /9 );
						printf("%.2f k",k);
						break;
					default: 
						printf("Valor inválido."); 
		    	}
		    	break;
			case 2:
				printf("   \nConversão de velocidade.\n");
				printf("\n   Digite o número do tipo de conversão requisitado:   ");
				printf("\n   1-Quilômetros por hora para Metros por segundo.\n   2-Metros por segundo para Quilômetros por hora.\n");
				scanf("%d",&modo2);
				switch(modo2){
					case 1:
						printf("Digite o valor em quilômetros por hora a ser convertido em metros por segundo:    ");
						scanf("%f", &kmh);
						ms = kmh/3.6;
						printf("%f",ms);
						break;
					case 2:
						printf("Digite o valor em metros por segundo a ser convertido em quilômetros por hora:    ");
						scanf("%f", &ms);
						kmh = ms *3.6;
						printf("%f",kmh);
						break;
					case 3:
						printf("Digite o valor em quilômetros por hora a ser convertido em milhas por hora:    ");
						scanf("%f", &kmh);
						mlh = kmh/1.609;
						printf("%f",mlh);
						break;
					case 4:
						printf("Digite o valor em milhas por hora a ser convertido em quilômetros por hora:    ");
						scanf("%f", &mlh);
						kmh = mlh *1.609;
						printf("%f",kmh);
						break;
					case 5:
						printf("Digite o valor em nós a ser convertido em quilômetros por hora:    ");
						scanf("%f", &no);
						kmh = no * 1.8519995164223;
						printf("%f",kmh);
						break;
					case 6:
						printf("Digite o valor em quilômetros por hora a ser convertido em nós:    ");
						scanf("%f", &kmh);
						no= kmh/1.8519995164223;
						printf("%f",no);
						break;
					default: 
						printf("Valor inválido.");
				}
				break;
			case 3:
				printf("   \nConversão de ângulo.\n");
				printf("\n   Digite o número do tipo de conversão requisitado:   ");
				printf("\n   1-Graus para radianos.\n   2-Radianos para graus.\n");
				scanf("%d",&modo3);
				switch(modo3){
					case 1:
						printf("Digite o valor em graus a ser convertido em radianos:    ");
						scanf("%f", &grs);
						rad = grs*pi/180;
						printf("%f",rad);
						break;
					case 2:
						printf("Digite o valor em radianos a ser convertido em graus:    ");
						scanf("%f", &rad);
						grs = rad*180/pi;
						printf("%f",grs);
						break;	
					default: 
						printf("Valor inválido.");
					}
				break;
			case 4:
				printf("   \nConversão de comprimento.\n");
				printf("\n   Digite o número do tipo de conversão requisitado:   ");
				printf("\n   1-Quilômetros para milhas.\n   2-Milhas para quilometros.\n   3-Polegadas para centímetros.\n   4-Centímetros para polegadas.\n   5-Jardas para metros.\n   6-Metros para jardas.\n ");
				scanf("%d",&modo4);
				switch(modo4){
					case 1:
						printf("Digite o valor em quilômetros a ser convertido em milhas:    ");
						scanf("%f", &km);
						ml = km/1.61;
						printf("%f",ml);
						break;
					case 2:
						printf("Digite o valor em milhas a ser convertido em quilômetros:    ");
						scanf("%f", &ml);
						km = 1.61*ml;
						printf("%f",km);
						break;	
					case 3:
						printf("Digite o valor em polegadas a ser convertido em centímetros:    ");
						scanf("%f", &pl);
						cm = pl *2.54;
						printf("%f",cm);
						break;	
					case 4:
						printf("Digite o valor em centímetros a ser convertido em polegadas:    ");
						scanf("%f", &cm);
						pl = cm / 2.54;
						printf("%f",pl);
						break;	
					case 5:
						printf("Digite o valor em jardas a ser convertido em metros:    ");
						scanf("%f", &jd);
						m = 0.91*jd;
						printf("%f",m);
						break;	
					case 6:
						printf("Digite o valor em metros a ser convertido em jardas:    ");
						scanf("%f", &m);
						jd = m/ 0.91;
						printf("%f",jd);
						break;	
					default: 
						printf("Valor inválido.");
				}
				break;
			case 5:
				printf("   \nConversão de área.\n");
				printf("\n   Digite o número do tipo de conversão requisitado:   ");
				printf("\n   1-Metros quadrados para acres.\n   2-Acres para metros quadrados.\n   3-Metros quadrados para hectares.\n   4-Hectares para metros.\n ");
				scanf("%d",&modo5);
				switch(modo5){
					case 1:
						printf("Digite o valor em metros quadrados a ser convertido em acres:    ");
						scanf("%f", &m2);
						acr = m2 *0.000247;
						printf("%f",acr);
						break;
					case 2:
						printf("Digite o valor em acres a ser convertido em metros quadrados:    ");
						scanf("%f", &acr);
						m2 = acr * 4048.58;
						printf("%f",m2);
						break;	
					case 3:
						printf("Digite o valor em metros quadrados a ser convertido em hectares:    ");
						scanf("%f", &m2);
						hect = m2 *0.0001;
						printf("%f",hect);
						break;	
					case 4:
						printf("Digite o valor em hectares a ser convertido em metros quadrados:    ");
						scanf("%f", &hect);
						m2 = hect *10000;
						printf("%f",m2);
						break;
					default: 
						printf("Valor inválido.");
				}
				break;
			case 6:
				printf("   \nConversão de massa.\n");
				printf("\n   Digite o número do tipo de conversão requisitado:   ");
				printf("\n   1-Quilogramas para libras.\n   2-Libras para quilogramas.\n");
				scanf("%d",&modo6);
				switch(modo6){
					case 1:
						printf("Digite o valor em quilogramas a ser convertido em libras:    ");
						scanf("%f", &kg);
						lb = kg/ 0.45;
						printf("%f",lb);
						break;
					case 2:
						printf("Digite o valor em libras a ser convertido em quilogramas:    ");
						scanf("%f", &lb);
						kg = lb*0.45;
						printf("%f",kg);
						break;
			    	default: 
						printf("Valor inválido.");
				}
				break;
			case 7:
				printf("   \nConversão de volume.\n");
				printf("\n   Digite o número do tipo de conversão requisitado:   ");
				printf("\n   1-Quilogramas para libras.\n   2-Libras para quilogramas.\n");
				scanf("%d",&modo7);
				switch(modo7){
					case 1:
						printf("Digite o valor em metros cúbicos a ser convertido em litros:    ");
						scanf("%f", &m3);
						lt = 1000*m3;
						printf("%f",lt);
						break;
					case 2:
						printf("Digite o valor em litros a ser convertido em metros cúbicos:    ");
						scanf("%f", &lt);
						m3 = lt/1000;
						printf("%f",m3);
						break;
			    	default: 
						printf("Valor inválido.");
				}
				break;
			case 8:
				printf("Conversor de unidades de armazenamento de dados:   ");
				printf("\n   1-Bits.\n   2-Bytes.\n   3-Kilobytes.\n   4-Megabytes.\n");
				printf("Escolha a unidade do valor apresentado:");
				scanf("%d",&unidade11);
				printf("Escolha a unidade do valor final:");
				scanf("%d",&unidade21);
				{
				if (unidade11 == 1 && unidade21 == 2){
					printf("\nConversão de bits para bytes.\nDigite o valor a ser convertido:   ");
					scanf("%f",&b);
					by = b/8;
					printf("%f",by);
				}
				if (unidade11 == 1 && unidade21 == 3){
					printf("\nConversão de bits para kilobytes.\nDigite o valor a ser convertido:   ");
					scanf("%f",&b);
					kb = b/8192;
					printf("%f",kb);
				}
				if (unidade11 == 1 && unidade21 == 4){
					printf("\nConversão de bits para megabytes.\nDigite o valor a ser convertido:   ");
					scanf("%f",&b);
					mb = b/8388608;
					printf("%f",mb);
				}
				if (unidade11 == 2 && unidade21 == 1){
					printf("\nConversão de bytes para bits.\nDigite o valor a ser convertido:   ");
					scanf("%f",&by);
					b = by * 8;
					printf("%f",b);
				}
				if (unidade11 == 2 && unidade21 == 3){
					printf("\nConversão de bytes para kilobytes.\nDigite o valor a ser convertido:   ");
					scanf("%f",&by);
					kb = by/1024;
					printf("%f",kb);
				}
				if (unidade11 == 2 && unidade21 == 4){
					printf("\nConversão de bytes para megabytes.\nDigite o valor a ser convertido:   ");
					scanf("%f",&by);
					mb = by/1048576;
					printf("%f",mb);
				}
				if (unidade11 == 3 && unidade21 == 1){
					printf("\nConversão de kilobytes para bits.\nDigite o valor a ser convertido:   ");
					scanf("%f",&kb);
					b = kb * 8388608;
					printf("%f",b);
				}
				if (unidade11 == 3 && unidade21 == 2){
					printf("\nConversão de kilobytes para bytes.\nDigite o valor a ser convertido:   ");
					scanf("%f",&kb);
					by = kb * 1024;
					printf("%f",by);
				}
				if (unidade11 == 3 && unidade21 == 4){
					printf("\nConversão de kilobytes para megabytes.\nDigite o valor a ser convertido:   ");
					scanf("%f",&kb);
					mb = kb /1024;
					printf("%f",mb);
				}
				if (unidade11 == 4 && unidade21 == 1){
					printf("\nConversão de megabytes para bits.\nDigite o valor a ser convertido:   ");
					scanf("%f",&mb);
					b = mb * 8388608;
					printf("%f",b);
				}
				if (unidade11 == 4 && unidade21 == 2){
					printf("Conversão de megabytes para bytes.\nDigite o valor a ser convertido:   ");
					scanf("%f",&mb);
					by = mb*1048576;
					printf("%f",by);
				}
				if (unidade11 == 4 && unidade21 == 3){
					printf("Conversão de megabytes para kilobytes.\nDigite o valor a ser convertido:   ");
					scanf("%f",&mb);
					kb = mb *1024;
					printf("%f",kb);
				}
				}
				break;
			case 9:
					printf("  \nConversor de tempo:     .\n   ");
					printf("\n   1-Segundos.\n   2-Minutos.\n   3-Horas.\n   4-Dias(365 dias).\n   5-Semanas(4 por mês).\n   6-Meses(de 30 dias).\n   7-Anos.\n   8-Décadas.\n   9-Séculos.\n   10-Milênios.\n");
					printf("\n\nEscolha a unidade do valor apresentado:");
					scanf("%d",&unidade1);
					printf("Escolha a unidade do valor final:");
					scanf("%d",&unidade2);
					{
					if (unidade1 == 1 && unidade2 == 2){
						printf("\nConversão de Segundos para minutos.\nDigite o valor a ser convertido:   ");
						scanf("lf",&sg);
						min = sg/60;
						printf("%lf",min);
					}
					if (unidade1 == 1 && unidade2 == 3){
						printf("\nConversão de Segundos para horas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sg);
						hr = sg/3600;
						printf("%lf",hr);
					}
					if (unidade1 == 1 && unidade2 == 4){
						printf("\nConversão de Segundos para dias.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sg);
						dia = sg/86400;
						printf("%lf",dia);
					}
					if (unidade1 == 1 && unidade2 == 5){
						printf("\nConversão de Segundos para semanas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sg);
						sm = sg/604800;
						printf("%lf",sm);
					}
					if (unidade1 == 1 && unidade2 == 6){
						printf("\nConversão de Segundos para meses.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sg);
						mes = sg/2592000;
						printf("%lf",mes);
					}
					if (unidade1 == 1 && unidade2 == 7){
						printf("\nConversão de Segundos para anos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sg);
						ano = sg/31536000;
						printf("%20.10lf",ano);
					}
					if (unidade1 == 1 && unidade2 == 8){
						printf("\nConversão de Segundos para décadas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sg);
						dec = sg / 315360000;
						printf("%20.10lf",dec);
					}
					if (unidade1 == 1 && unidade2 == 9){
						printf("\nConversão de Segundos para séculos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sg);
						sec = sg / 3153600000;
						printf("%20.15lf",sec);
					}
					if (unidade1 == 1 && unidade2 == 10){
						printf("\nConversão de Segundos para milênios.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sg);
						mln = sg / 31536000000;
						printf("%20.20lf",mln);
					}
					if (unidade1 == 2 && unidade2 == 1){
						printf("\nConversão de minutos para segundos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&min);
						sg = min * 60;
						printf("%lf",sg);
					}
					if (unidade1 == 2 && unidade2 == 3){
						printf("\nConversão de minutos para horas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&min);
						hr = min/60;
						printf("%lf",hr);
					}
					if (unidade1 == 2 && unidade2 == 4){
						printf("\nConversão de minutos para dias.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&min);
						dia = min/1440;
						printf("%lf",dia);
					}
					if (unidade1 == 2 && unidade2 == 5){
						printf("\nConversão de minutos para semanas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&min);
						sm = min/10080;
						printf("%lf",sm);
					}
					if (unidade1 == 2 && unidade2 == 6){
						printf("\nConversão de minutos para meses.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&min);
						mes = min/43800;
						printf("%lf",mes);
					}
					if (unidade1 == 2 && unidade2 == 7){
						printf("\nConversão de minutos para anos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&min);
						ano = min/525600;
						printf("%lf",ano);
					}
					if (unidade1 == 2 && unidade2 == 8){
						printf("\nConversão de minutos para décadas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&min);
						dec = min/5256000;
						printf("%lf",dec);
					}
					if (unidade1 == 2 && unidade2 == 9){
						printf("\nConversão de minutos para séculos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&min);
						sec = min/52560000;
						printf("%20.10lf",sec);
					}
					if (unidade1 == 2 && unidade2 == 10){
						printf("\nConversão de minutos para milênios.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&min);
						mln = min/525600000;
						printf("%20.15lf",mln);
					}
					if (unidade1 == 3 && unidade2 == 1){
						printf("\nConversão de horas para segundos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&hr);
						sg = hr * 3600;
						printf("%lf",sg);
					}
					if (unidade1 == 3 && unidade2 == 2){
						printf("\nConversão de horas para minutos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&hr);
						min = hr * 60;
						printf("%lf",min);
					}
					if (unidade1 == 3 && unidade2 == 4){
						printf("\nConversão de horas para dias.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&hr);
						dia = hr/24;
						printf("%lf",dia);
					}
					if (unidade1 == 3 && unidade2 == 5){
						printf("\nConversão de horas para semanas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&hr);
						sm = hr/168;
						printf("%lf",sm);
					}
					if (unidade1 == 3 && unidade2 == 6){
						printf("\nConversão de horas para meses.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&hr);
						mes = hr/730;
						printf("%lf",mes);
					}
					if (unidade1 == 3 && unidade2 == 7){
						printf("\nConversão de horas para anos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&hr);
						ano = hr/8760;
						printf("%lf",ano);
					}
					if (unidade1 == 3 && unidade2 == 8){
						printf("\nConversão de horas para décadas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&hr);
						dec = hr/87600;
						printf("%lf",dec);
					}
					if (unidade1 == 3 && unidade2 == 9){
						printf("\nConversão de horas para séculos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&hr);
						sec = hr/876000;
						printf("%lf",sec);
					}
					if (unidade1 == 3 && unidade2 == 10){
						printf("\nConversão de horas para milênios.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&hr);
						mln = hr/8760000;
						printf("%lf",mln);
					}
					if (unidade1 == 4 && unidade2 == 1){
						printf("\nConversão de dias para segundos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dia);
						sg = dia * 86400;
						printf("%lf",sg);
					}
					if (unidade1 == 4 && unidade2 == 2){
						printf("\nConversão de dias para minutos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dia);
						min = dia * 1440;
						printf("%lf",min);
					}
					if (unidade1 == 4 && unidade2 == 3){
						printf("\nConversão de dias para horas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dia);
						hr = dia * 24;
						printf("%lf",hr);
					}
					if (unidade1 == 4 && unidade2 == 5){
						printf("\nConversão de dias para semanas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dia);
						sm = dia/7;
						printf("%lf",sm);
					}
					if (unidade1 == 4 && unidade2 == 6){
						printf("\nConversão de dias para meses.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dia);
						mes = dia/30;
						printf("%lf",mes);
					}
					if (unidade1 == 4 && unidade2 == 7){
						printf("\nConversão de dias para anos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dia);
						ano = dia/365;
						printf("%lf",ano);
					}
					if (unidade1 == 4 && unidade2 == 8){
						printf("\nConversão de dias para décadas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dia);
						dec = dia/3650;
						printf("%lf",dec);
					}
					if (unidade1 == 4 && unidade2 == 9){
						printf("\nConversão de dias para séculos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dia);
						sec = dia/36500;
							printf("%lf",sec);
						}
					if (unidade1 == 4 && unidade2 == 10){
						printf("\nConversão de dias para milênios.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dia);
						mln = dia/365000;
						printf("%lf",mln);
					}
					if (unidade1 == 5 && unidade2 == 1){
						printf("\nConversão de semanas para segundos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sm);
						sg = sm * 604800;
						printf("%lf",sg);
					}
					if (unidade1 == 5 && unidade2 == 2){
						printf("\nConversão de semanas para minutos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sm);
						min = sm * 10080;
						printf("%lf",min);
					}
					if (unidade1 == 5 && unidade2 == 3){
						printf("\nConversão de semanas para horas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sm);
						hr = sm * 168;
						printf("%lf",hr);
					}
					if (unidade1 == 5 && unidade2 == 4){
						printf("\nConversão de semanas para dias.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sm);
						dia = sm * 7;
						printf("%lf",dia);
					}
					if (unidade1 == 5 && unidade2 == 6){
						printf("\nConversão de semanas para meses.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sm);
						mes = sm/4;
						printf("%lf",mes);
					}
					if (unidade1 == 5 && unidade2 == 7){
						printf("\nConversão de semanas para anos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sm);
						ano = sm/52.14;
						printf("%lf",ano);
					}
					if (unidade1 == 5 && unidade2 == 8){
						printf("\nConversão de semanas para décadas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sm);
						dec = sm/521.4;
						printf("%lf",dec);
					}
					if (unidade1 == 5 && unidade2 == 9){
						printf("\nConversão de semanas para séculos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sm);
						sec = sm/5214;
						printf("%lf",sec);
					}
					if (unidade1 == 5 && unidade2 == 10){
						printf("\nConversão de semanas para milênios.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sm);
						mln = sm/52140;
						printf("%lf",mln);
					}
					if (unidade1 == 6 && unidade2 == 1){
						printf("\nConversão de meses para segundos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&mes);
						sg = mes * 2592000;
						printf("%lf",sg);
					}
				   	if (unidade1 == 6 && unidade2 == 2){
						printf("\nConversão de meses para minutos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&mes);
						min = mes * 43800;
						printf("%lf",min);
					}
					if (unidade1 == 6 && unidade2 == 3){
						printf("\nConversão de meses para horas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&mes);
						hr = mes * 730;
						printf("%lf",hr);
					}
					if (unidade1 == 6 && unidade2 == 4){
						printf("\nConversão de meses para dias.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&mes);
						dia = mes * 30;
						printf("%lf",dia);
					}
					if (unidade1 == 6 && unidade2 == 5){
						printf("\nConversão de meses para semanas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&mes);
						sm = mes * 4;
						printf("%lf",sm);
					}
					if (unidade1 == 6 && unidade2 == 7){
						printf("\nConversão de meses para anos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&mes);
						ano = mes/12;
						printf("%lf",ano);
					}
					if (unidade1 == 6 && unidade2 == 8){
						printf("\nConversão de meses para décadas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&mes);
						dec = mes/120;
						printf("%lf",dec);
					}
					if (unidade1 == 6 && unidade2 == 9){
						printf("\nConversão de meses para séculos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&mes);
						sec = mes/1200;
						printf("%lf",sec);
					}
					if (unidade1 == 6 && unidade2 == 10){
						printf("\nConversão de meses para milênios.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&mes);
						mln = mes/12000;
						printf("%lf",mln);
					}
					if (unidade1 == 7 && unidade2 == 1){
						printf("\nConversão de anos para segundos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dec);
						sg = dec * 31536000;
						printf("%10.15lf",sg);
					}
					if (unidade1 == 7 && unidade2 == 2){
						printf("\nConversão de anos para minutos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&ano);
						min = ano * 525600;
						printf("%lf",min);
					}
					if (unidade1 == 7 && unidade2 == 3){
						printf("\nConversão de anos para horas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&ano);
						hr = ano * 8760;
						printf("%lf",hr);
					}
					if (unidade1 == 7 && unidade2 == 4){
						printf("\nConversão de anos para dias.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&ano);
						dia = ano * 365;
						printf("%lf",dia);
					}
					if (unidade1 == 7 && unidade2 == 5){
						printf("\nConversão de anos para semanas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&ano);
						sm = ano * 52.14;
						printf("%lf",sm);
					}
					if (unidade1 == 7 && unidade2 == 6){
						printf("\nConversão de anos para meses.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&ano);
						mes = ano * 12;
						printf("%lf",mes);
					}
					if (unidade1 == 7 && unidade2 == 8){
						printf("\nConversão de anos para décadas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&ano);
						dec = ano/10;
						printf("%lf",dec);
					}
					if (unidade1 == 7 && unidade2 == 9){
						printf("\nConversão de anos para séculos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&ano);
						sec = ano/100;
						printf("%lf",sec);
					}
					if (unidade1 == 7 && unidade2 == 10){
						printf("\nConversão de anos para milênios.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&ano);
						mln = ano/1000;
						printf("%lf",mln);
					}
					if (unidade1 == 8 && unidade2 == 1){
						printf("\nConversão de décadas para segundos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dec);
						sg = dec * 315360000;
						printf("%lf",sg);
					}
				   	if (unidade1 == 8 && unidade2 == 2){
						printf("\nConversão de décadas para minutos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dec);
						min = dec * 5256000 ;
						printf("%lf",min);
					}
					if (unidade1 == 8 && unidade2 == 3){
						printf("\nConversão de décadas para horas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dec);
						hr = dec * 87600;
						printf("%lf",hr);
					}
					if (unidade1 == 8 && unidade2 == 4){
						printf("\nConversão de décadas para dias.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dec);
						dia = dec * 3650;
						printf("%lf",dia);
					}
					if (unidade1 == 8 && unidade2 == 5){
						printf("\nConversão de décadas para semanas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dec);
						sm = dec * 521.4;
						printf("%lf",sm);
					}
					if (unidade1 == 8 && unidade2 == 6){
						printf("\nConversão de décadas para meses.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dec);
						mes = dec * 120;
						printf("%lf",mes);
					}
					if (unidade1 == 8 && unidade2 == 7){
						printf("\nConversão de décadas para anos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dec);
						ano = dec * 10;
						printf("%lf",ano);
					}
					if (unidade1 == 8 && unidade2 == 9){
						printf("\nConversão de décadas para séculos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dec);
						sec = dec/10;
						printf("%lf",sec);
					}
					if (unidade1 == 8 && unidade2 == 10){
						printf("\nConversão de décadas para milênios.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&dec);
						mln = dec/100;
						printf("%lf",mln);
					}
					if (unidade1 == 9 && unidade2 == 1){
						printf("\nConversão de séculos para segundos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sec);
						sg = sec * 3153600000;
						printf("%10.2lf",sg);
					}
				   	if (unidade1 == 9 && unidade2 == 2){
						printf("\nConversão de séculos para minutos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sec);
						min = sec * 52560000 ;
						printf("%10.2lf",min);
					}
					if (unidade1 == 9 && unidade2 == 3){
						printf("\nConversão de séculos para horas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sec);
						hr = sec * 876000;
						printf("%10.2lf",hr);
					}
					if (unidade1 == 9 && unidade2 == 4){
						printf("\nConversão de séculos para dias.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sec);
						dia = sec * 36500;
						printf("%lf",dia);
					}
					if (unidade1 == 9 && unidade2 == 5){
						printf("\nConversão de séculos para semanas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sec);
						sm = sec * 5214;
						printf("%lf",sm);
					}
					if (unidade1 == 9 && unidade2 == 6){
						printf("\nConversão de séculos para meses.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sec);
						mes = sec * 1200;
						printf("%lf",mes);
					}
					if (unidade1 == 9 && unidade2 == 7){
						printf("\nConversão de séculos para anos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sec);
						ano = sec * 100;
						printf("%lf",ano);
					}
					if (unidade1 == 9 && unidade2 == 8){
						printf("\nConversão de séculos para décadas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sec);
						dec = sec*10;
						printf("%lf",dec);
					}
					if (unidade1 == 9 && unidade2 == 10){
						printf("\nConversão de séculos para milênios.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&sec);
						mln = sec/10;
						printf("%lf",mln);
					}
					if (unidade1 == 10 && unidade2 == 1){
						printf("\nConversão de milênios para segundos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&mln);
						sg = mln * 31536000000;
						printf("%10.2lf",sg);
					}
				   	if (unidade1 == 10 && unidade2 == 2){
						printf("\nConversão de milênios para minutos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&mln);
						min = mln * 525600000 ;
						printf("%10.2lf",min);
					}
					if (unidade1 == 10 && unidade2 == 3){
						printf("\nConversão de milênios para horas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&mln);
						hr = mln * 8760000;
						printf("%10.2lf",hr);
					}
					if (unidade1 == 10 && unidade2 == 4){
						printf("\nConversão de milênios para dias.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&mln);
						dia = mln * 365000;
						printf("%lf",dia);
					}
					if (unidade1 == 10 && unidade2 == 5){
						printf("\nConversão de milênios para semanas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&mln);
						sm = mln * 52140;
						printf("%lf",sm);
					}
					if (unidade1 == 10 && unidade2 == 6){
						printf("\nConversão de milênios para meses.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&mln);
						mes =  mln * 12000;
						printf("%10.2lf",mes);
					}
					if (unidade1 == 10 && unidade2 == 7){
						printf("\nConversão de milênios para anos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&mln);
						ano = mln * 1000;
						printf("%lf",ano);
					}
					if (unidade1 == 10 && unidade2 == 8){
						printf("\nConversão de milênios para décadas.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&mln);
						dec = mln*10;
						printf("%lf",dec);
					}
					if (unidade1 == 10 && unidade2 == 9){
						printf("\nConversão de milênios para séculos.\nDigite o valor a ser convertido:   ");
						scanf("%lf",&mln);
						sec = mln *10;
						printf("%lf",sec);
					}
					}
			case 0:
					printf("\nFim do programa,até a próxima.");
				break;
			
			default: 
			printf("Valor inválido.");
			
			break; 	
		}
	}while(tipo != 0);	
return 0;
}
