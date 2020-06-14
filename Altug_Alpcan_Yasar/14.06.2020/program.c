#include <stdio.h>
#include <stdbool.h>
void swap(char *x, char *y) {
	char z;
	z = *x;
	*x = *y;
	*y = z;
}
void permute(char *a, int l, int sayi, FILE *f) {
	if (l == sayi) {
		fprintf(f,"%s\n",a);
	}
	for (int i = l; i < sayi; i++) {
		swap((a+l),(a+i));
		permute(a, l+1, sayi, f);
		swap((a+l),(a+i));
	}
}
int main() {
	FILE *file;
	FILE *file2;
	FILE *file3;
	int sayi,c,d;
	int sayac = 0;
	char ch;
	char text[100];
	char text2[100];
	printf("Kac harf giricen: ");
	scanf("%d",&sayi);
	char harfler[sayi];
	harfler[sayi] = '\0';
	for (int i = 0; i < sayi; i++) {
		printf("Harf: ");
		scanf(" %c",&ch);
		harfler[i] = ch;
	}
	file = fopen("komb.txt","w");
	permute(harfler, 0, sayi, file);
	fclose(file);
	file2 = fopen("komb.txt","r");
	int a = 0;
	while ((c = getc(file2))!= EOF) {
		if (c == '\n') {
			int b = 0;
			file = fopen("kelimeler.txt","r");
			while ((d = getc(file))!= EOF) {
				if (d == '\n') {
					if (a == b) {
						int boz = 0;
						for (int i = 0; i < a; i++) {
							if (text[i] != text2[i]) {
								boz = 1;
								break;
							}
						}
						if (!boz) {
							file3 = fopen("cikti.txt","w");
							for (int i = 0; i < a; i++) {
								printf("%c",text[i]);
							}
							printf("\n");
							fclose(file3);
						}
					}
					b = 0;
				}
				else {
					text2[b] = d;
					b++; 
				}
			}
			fclose(file);
			a = 0;
		}
		else {
			text[a] = c;
			a++;
		}
	}
}

