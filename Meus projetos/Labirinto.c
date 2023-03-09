#include <stdio.h>
#include <stdlib.h>
#define CEL_ATRAVESSA
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,j;
	int mapa[15][15]={
	    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	    0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,
	    1,0,1,0,1,1,1,0,0,0,0,0,0,0,1,
	    1,0,1,0,1,1,1,0,1,1,1,1,0,1,1,
	    1,0,1,0,0,0,0,0,1,1,1,1,0,1,1,
	    1,0,1,1,0,1,1,1,1,1,1,1,0,1,1,
	    1,0,0,0,0,1,0,0,0,0,0,1,0,1,1,
	    1,0,1,0,1,1,0,1,1,0,1,1,1,1,1,
	    1,0,1,0,1,1,0,0,1,0,1,1,1,1,1,
	    1,0,0,0,1,1,1,0,1,0,0,1,1,1,1,
	    1,1,1,0,1,1,1,0,1,1,0,1,1,1,1,
	    1,1,0,0,0,0,1,0,1,1,0,0,0,0,1,
	    1,1,0,1,1,0,1,0,1,1,1,0,1,1,1,
	    1,1,0,1,1,0,0,0,1,1,1,0,1,1,1,
	    1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,};
	int x=1,y=1;
	char key;
	while(x!=14 || y!=14){	
	    system("cls");
		for(i=0;i<15;i++){
		    for(j=0;j<15;j++){
		        if(i == x && j == y)
	               printf("%c%c",176,176);
	            else if(mapa[i][j]==1)
		           printf("%c%c",219,219);
			    else printf("  ");  
	        }
	        printf("\n");
	    } 	
	
    int tx,ty;
	tx=x;
    ty=y;
    key = getch();
	if(key=='w')tx=x-1;
    if(key=='s')tx=x+1;
    if(key=='a')ty=y-1;
    if(key=='d')ty=y+1;
    if(!(mapa[tx][ty]&1==1)){
    	x=tx;
    	y=ty;
	}
	}
    
	return 0;
}                                                                                                                                                                                                
