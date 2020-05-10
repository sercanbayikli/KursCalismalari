#include <stdio.h>

int main(){

char a[100];
char b[100];
char c[100][100];
int i=0;
int d;
int e=0;


	printf("bosluk kullanarak iki isim girin : ");
	scanf("%s %s",a,b);
	for(i=0;a[i]!='\0';i++){
	for(d=0;b[d]!='\0';d++){
	if(a[i]==b[d]){
  c[0][i]=a[i];
	c[1][d]=b[d];
	e++;
	}
	}
	}
			
  for(int i=0;i<2;i++){
	for(int a=0;a<10;a++){
	printf("%c",c[i][a]);
	}
	printf("\n");
	}
  
  return 0;
}
