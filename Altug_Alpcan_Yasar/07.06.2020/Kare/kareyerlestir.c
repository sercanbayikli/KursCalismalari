#include <stdio.h>

int main() {
	FILE *file;
	int okay = 0;
	int c;
	int yatay = 0;
	int dikey = 0;
	int x = 1;
	int aman = 0;
	int enbuyukboyut = 0;
	char ch = 'A';
	
	file = fopen("olusansekil.txt","r");
	while ((c = getc(file))!= EOF) {
		if (c == ' ' && x == 1) {
			yatay++;
		}
		if (c == '\n') {
			dikey++;
			x = 0;
		}	
 	}
	fclose(file);
	
	int sekilarray[dikey][yatay];
	
	file = fopen("olusansekil.txt","r");
	int i = 0;
	int j = 0;
	while ((c = getc(file))!= EOF) {
		if (c != ' ') {
			if (c == '\n') {
				i++;
				j = 0;
			}
			else {
				sekilarray[i][j] = c - '0';
				j++;
			}
		}
	}
	fclose(file);
	for (int i = 0; i < dikey-1; i++) {
		for (int j = 0; j < yatay; j++) {
			if (sekilarray[i][j] == 0) {
				int boyut = 1;
				aman = 0;
				okay = 0;
				while (1) {
					for (int a = 0 ; a <= boyut; a++) {
						for (int b = 0; b <= boyut; b++) {
							if (sekilarray[i+a][j+b] != 0) {
								aman = 1;
								break;
							}
						}
						if (aman) {
							break;
						}
					}
					if (aman) {
						if (okay) {
							ch = 'A';
							for (int a = 0; a <= boyut-1; a++) {
								for (int b = 0; b <= boyut-1; b++) {
									if (boyut > enbuyukboyut) {
										enbuyukboyut = boyut;
										for (int k = 0; k < dikey; k++) {
											for (int l = 0; l < yatay; l++) {
												if (sekilarray[k][l] >= 65 && sekilarray[k][l] <= 90) {
													sekilarray[k][l] = 'X';
												}
											}
										}
									}
									if (boyut == enbuyukboyut) {
										sekilarray[i+a][j+b] = ch;
										ch++;
									}
									else {
										sekilarray[i+a][j+b] = 'X';
									}
								}
							}	
						}
						break;
					}
					else {
						boyut++;
						okay = 1;	
					}
				}
			}
		}
	}
	
	file = fopen("karelenmissekil.txt","w");
	for (int i = 0; i < dikey; i++) {
		for (int j = 0; j < yatay; j++) {
			if (sekilarray[i][j] >= 65 && sekilarray[i][j] <= 90) {
				fprintf(file,"%c ", sekilarray[i][j]);
			}
			else {
				fprintf(file,"%d ", sekilarray[i][j]);
			}
		}
		fprintf(file,"\n");
	}
}
