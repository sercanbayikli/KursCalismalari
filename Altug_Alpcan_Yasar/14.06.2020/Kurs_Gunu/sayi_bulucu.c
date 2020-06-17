#include <stdio.h>

int main() {

	FILE *file;
	
	file = fopen("kelimeler.txt","r");
	
	int c;
	int sayilar[26] = {0};
	while ((c = getc(file))!= EOF) {
		if (c >= 97 && c <= 122) {
			sayilar[c - 'a']++;
		}
	}
	fclose(file);
	fopen("sayilar.txt","w");
	for (int i = 0; i < 26; i++) {
		fprintf(file,"%c = %d\n", ('a' + i) - 32, sayilar[i]);
	}
	fclose(file);
}
