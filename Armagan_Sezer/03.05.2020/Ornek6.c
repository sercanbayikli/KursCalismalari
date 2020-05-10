#include <stdio.h>

int main(){

char isim1[100],isim2[100],ayniharf[100][100];
int a=0,b,c=0;
	printf("2 isim girin\n");
	scanf("%s %s",isim1,isim2);
	for(a=0;isim1[a]!='\0';a++){
	for(b=0;isim2[b]!='\0';b++){
	if(isim1[a]==isim2[b]){
  ayniharf[0][a]=isim1[a];
	ayniharf[1][b]=isim2[b];
	c++;
	}
	}
	}
			
  for(int a=0;a<2;a++){
	for(int isim1=0;isim1<10;isim1++){
	printf("%c",ayniharf[a][isim1]);
	}
	printf("\n");
	}
  
  return 0;
}
