#include <stdio.h>
#include <math.h>
int main() {
	int sayilar[5];
	int carpim = 1;
	double sayi = 5;
	for (int i = 0; i < 5; i++) {
		printf("Sayi Girin: ");
		scanf("%d",&sayilar[i]);
		if (sayilar[i] < 0) {
			sayi = i;
			break;
		}
		carpim *= sayilar[i];
	} 
	printf("Sonuc: %.2f",pow(carpim,1/sayi));
	
		

	return 0;
}
