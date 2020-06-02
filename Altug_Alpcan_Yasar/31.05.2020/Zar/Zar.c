#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// NOT:
// Büyük ihtimalle ben soruyu yine yanlýþ anladým ama benim
// anladýðým bu þekilde.

int main () {
	int secim;
	int dice_count[6] = {0};
	int sayi;
	srand(time(NULL));
	while (1) {
		printf("1-Auto\n2-Manuel\n");
		scanf("%d",&secim);
		if (secim == 1 || secim == 2) {
			printf("Kac Zar Atilsin = ");
			scanf("%d",&sayi);
			if (secim == 1) {
				for (int i = 0; i < sayi; i++) {
					int r = ( rand() % 6 ) + 1;
					dice_count[r-1]++;
				}
			}
			else if (secim == 2) {
				for (int i = 0; i < sayi; i++) {
					printf("Zardan Cikan Degeri Girin = ");
					scanf("%d", &secim);
					while (secim < 1 || secim > 6) {
						printf("Gecersiz Deger\n");
						printf("Zardan Cikan Degeri Girin = ");
						scanf("%d", &secim);	
					}
					dice_count[secim-1]++;
				}
			}
			for (int i = 0; i < 6; i++) {
				printf("%d.%%%d\n",i+1,dice_count[i] * 100 / sayi);
			}
			printf("\nBir Sonraki Zar Ne Olur = ");
			scanf("%d",&secim);
			int r = ( rand() % 6 ) + 1;
			if (r == secim) {
				printf("Dogru Bildiniz");
			}
			else {
				printf("Yanlis Bildiniz\nZar %d Geldi", r);
			}
			break;
		}

	}
	return 0;
}
