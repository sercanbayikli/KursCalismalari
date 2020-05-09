#include <stdio.h>
char dizi[100];
int i=0;
int main(){
	printf("Speak thy words: ");
	scanf("%[^\n]",dizi);
	while(dizi[i]!='\0'){
		if(dizi[i]==' '){
			printf("\n");
			i++;
		}
			printf("%c",dizi[i]);
			i++;
	}
}
