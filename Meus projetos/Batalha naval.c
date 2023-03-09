#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i,j,tiro,x,y,max,t,choque=0;
	max=15;
	int mapa[max][max];
	
	for(i=0;i<max;i++)
		for (j=0;j<max;j++)
			mapa[i][j]=0;
			
	srand(time(NULL));
	
	x=rand()% max;
	y=rand()%max;
	mapa[x][y]=-1;
	
	//para o 2:
	
	t=rand()%2;
	
	if(t == 0){
		do{
			choque=0;
			x=rand()%max;
			y=rand()%(max-1);
			if(mapa[x][y] != 0 || mapa[x][y+1] != 0 ) choque=1;
			else{
				mapa[x][y]=-2;
				mapa[x][y+1]=-2;
			}	
 		}while(choque == 1);
 	}else{
 		do{
			choque=0;
			x=rand()%(max-1);
			y=rand()%max;
			if(mapa[x][y] != 0 || mapa[x+1][y] != 0) choque=1;
			else{
				mapa[x][y] = -2;
				mapa[x+1][y] = -2;
			}
		}while(choque);
 	}
 	
 	//para o 3:
	t=rand()%2;
	
	if(t == 0){
		do{
			choque=0;
			x=rand()%max;
			y=rand()%(max-2);
			if(mapa[x][y] != 0 || mapa[x][y+2] != 0 ) choque=1;
			else{
				mapa[x][y]=-2;
				mapa[x][y+1]=-2;
				mapa[x][y+2]=-2;
			}	
 		}while(choque == 1);
 	}else{
 		do{
			choque=0;
			x=rand()%(max-1);
			y=rand()%max;
			if(mapa[x][y] != 0 || mapa[x+1][y] != 0) choque=1;
			else{
				mapa[x][y] = -3;
				mapa[x+1][y] = -3;
				mapa[x+2][y]=-3;
			}
		}while(choque);
 	}
 	
 	//para o 4:
 	t=rand()%2;
	
	if(t == 0){
		do{
			choque=0;
			x=rand()%max;
			y=rand()%(max-3);
			if(mapa[x][y] != 0 || mapa[x][y+3] != 0 ) choque=1;
			else{
				mapa[x][y]=-4;
				mapa[x][y+1]=-4;
				mapa[x][y+2]=-4;
				mapa[x][y+3]=-4;
			}	
 		}while(choque == 1);
 	}else{
 		do{
			choque=0;
			x=rand()%(max-3);
			y=rand()%max;
			if(mapa[x][y] != 0 || mapa[x+3][y] != 0) choque=1;
			else{
				mapa[x][y] = -2;
				mapa[x+1][y] = -2;
				mapa[x+2][y]=-2;
				mapa[x+3][y]=-2;
			}
		}while(choque);
 	}
 	
 	
	for(tiro=0;tiro<20;tiro++){
		system("cls");
		for(i=0;i<max;i++){
			for(j=0;j<max;j++){
				if(mapa[i][j] <= 0) printf(".");
				else printf("%d",mapa[i][j]);
			}
			printf("\n");
		}
		printf("Digite a coordenada:  ");
		scanf("%i %i",&x,&y);
		if(mapa[x][y] < 0);
			mapa[x][y] = - mapa[x][y];
		if(mapa[x][y] == 0 ) mapa[x][y] = 9;
	}    
	
	system("pause");
	return 0;
}
