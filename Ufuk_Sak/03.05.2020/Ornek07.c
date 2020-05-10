#include <stdio.h>
#include <string.h>

int main(void){
char str1[50], str2[50];
int i=0, k=0;
	printf("Metin girin:\n");
	scanf("%s %s", str1, str2);
	for(i=0;str1[i]!='\0';i++){
		for(k=0;str2[k]!='\0';k++){
			if(str1[i]==str2[k]){
				str1[i] = '_';
				str2[k] = '_';
			}
		}
	}
	printf("%s\n", str1);
	printf("%s", str2);
	return 0;
}
