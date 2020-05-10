#include <stdio.h>

int main(void){
	char str[50];
	int i=0;
	printf("Metin girin:\n"); scanf("%[^\n]", str);
	while(str[i]!='\0'){
		if(str[i]==' '){
			printf("\n");
		} else {
			printf("%c", str[i]);
		}
		i++;
	}
	return 0;
}
