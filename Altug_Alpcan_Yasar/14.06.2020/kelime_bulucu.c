#include <stdio.h>

int main() {
	char substr[100];
	int c;
	int a = 0;
	int d;
	char text[100];
	FILE *file;
	printf("Arama Girin: ");
	scanf("%s",&substr);
	file = fopen("kelimeler.txt","r");
	while ((c = getc(file))!= EOF) {
		if (c == '\n') {
			int tamam = 0;
			for (int i = 0; i < a; i++) {
				d = 1;
				if (text[i] == substr[0]) {
					tamam = 1;
					while (substr[0+d] != '\0') {
						
						if (i+d >= a) {
							tamam = 0;
							break;
						}
						
						if (text[i+d] == substr[0+d]) {
							d++;
						}
						else {
							tamam = 0;
							break;
						}
					}
					if (tamam) {
						break;
					}
				}	
			}
			if (tamam) {
				for (int i = 0; i < a; i++) {
					printf("%c",text[i]);
				}
				printf("\n");
			}
			a = 0;
		}
		else {
			text[a] = c;
			a++;	
		}
	}
    		
	
	
}
