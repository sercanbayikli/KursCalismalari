#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sayiyap(char *a, char *b, int *x, int *y) {
	for (int i = 0; a[i] != '\0'; i++) {
		int c = 1;
		int z = i;
		while(z > 0) {
			c *= 10;
			z--;
		}
		*x *= c;
		*x += a[i] - '0';
	}
	for (int i = 0; b[i] != '\0'; i++) {
                int c = 1;
                int z = i;
                while(z > 0) {
                        c *= 10;
			z--;
                }
                *y *= c;
                *y += b[i] - '0';
        }
}
int main(int argc, char *argv[]) {
	int yatay = 0;
	int dikey = 0;
	sayiyap(argv[1], argv[2], &yatay, &dikey);
	int sekilarray[dikey][yatay];
	FILE *file;
	srand(time(0));

	int x_sayisi = (yatay / 5) * 3;
	int random_tutucu[x_sayisi];
	
	for (int i = 0; i < dikey; i++) {
		for (int a = 0; a < x_sayisi; a++) {
			random_tutucu[a] = -1;
		}
		for (int a = 0; a < x_sayisi; a++) {
			int okay = 0;
			int random_sayi = 0;
			while (okay == 0) {
				okay = 1;
				random_sayi = rand() % yatay;	
				for (int b = 0; b < x_sayisi; b++) {
					if (random_tutucu[b] == random_sayi) {
						okay = 0;
					}
				}
			}
			random_tutucu[a] = random_sayi;
		}
		for (int j = 0; j < yatay; j++) {
			int okayy = 1;
			for (int a = 0; a < x_sayisi; a++) {
				if (random_tutucu[a] == j) {
					sekilarray[i][j] = 1;
					okayy = 0;
				}
			}
			if (okayy) {
				sekilarray[i][j] = 0;
			}
		}
	}
	// Yazdirma
	file = fopen("olusansekil.txt","w");
	for (int i = 0; i < dikey; i++) {
		for (int j = 0; j < yatay; j++) {
			fprintf(file,"%d ", sekilarray[i][j]);
		}
		fprintf(file,"\n");
	}
	fclose(file);
	return 0;
}

