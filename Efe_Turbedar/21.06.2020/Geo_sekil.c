#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void drawline(int a,int aa),drawHORout(int b,int bb),drawwalls(int c,int cc),drawHORin(int d, int dd);
int i,j,r=0,k,sigma,l,len;
int main(){
	srand(time(NULL));
	while (r<10){ r=rand() % 21;}
	len=r/10;
	drawHORout(r,r/10);
	drawwalls(r,r);
	drawHORin(r,r);
	drawline(r,r);
}
void drawline(int a,int aa){
	for(i=0;i<=aa;i++){printf(" ");}
        for(i=0;i<a;i++){printf("* ");}
	printf("\n");
}
void drawHORout(int b,int bb){
        for(i=1;i<b;i++){
                for(j=0;j<=b-i;j++){printf(" ");}
                printf("*");
                for(j=3;j<(i+bb)*2;j++){printf(" ");}
                printf("*\n");
        }
}
void drawwalls(int c,int cc){
        for(i=1;i<c;i++){
                printf("  *");
                for(j=4;j<cc*4;j++){printf(" ");}
                printf("*\n");
        }
}
void drawHORin(int d,int dd){
        for(i=1;i<d;i++){
                for(j=i;j>=0;j--){printf(" ");}
                printf("*");
		for(j=2;j<(dd*4)-(i*2);j++){printf(" ");}
                printf("*\n");
        }
}
