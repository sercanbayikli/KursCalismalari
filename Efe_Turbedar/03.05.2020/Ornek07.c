#include <stdio.h>
char a[100],b[100],c[100][100];
int i=0,j,s=0,v,l;
int main(){
	printf("Speak 2 of thy words: ");
	scanf("%s %s",&a[0],&b[0]);
	for(i=0;a[i]!='\0';i++){
		for(j=0;b[j]!='\0';j++){
			if(a[i]==b[j]){
				a[i]='-';
				b[j]='-';
			}
		}
	}
	for(v=0;a[v]!='\0';v++){
		printf("%c",a[v]);
	}
	printf("\n");
	for(v=0;b[v]!='\0';v++){
		printf("%c",b[v]);
	}
}
