#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[50], str2[50], result[2][50];
	int i=0, k=0, j=0;
	printf("2 Sozcuk girin:\n"); scanf("%s %s", str1, str2);
	for(i=0; str1[i]!='\0'; i++){
		for(k=0; str2[k]!='\0'; k++){
			if(str1[i]==str2[k]){
				result[0][j]=str1[i];
				result[1][j]=str2[k];
				j++;	
			}
		}
	}
	for(i=0; result[0][i]!='\0'; i++){
		printf("%c", result[0][i]);	
	}
	printf("\n");
	for(i=0; result[1][i]!='\0'; i++){
		printf("%c", result[1][i]);
	}
	return 0;
}
