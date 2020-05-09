#include <stdio.h>
char a[100],b[100],c[100][100];
int i=0,j,s=0,v,l;
int main(){
	printf("Speak 2 of thy words: ");
	scanf("%s %s",&a[0],&b[0]);
	for(i=0;a[i]!='\0';i++){
		for(j=0;b[j]!='\0';j++){
			if(a[i]==b[j]){
				c[0][i]=a[i];
				c[1][j]=b[j];
				s++;
			}
		}
	}
	for(l=0;l<2;l++){
		for(v=0;v<10;v++){
			printf("%c",c[l][v]);
		}
		printf("\n");
	}
}
