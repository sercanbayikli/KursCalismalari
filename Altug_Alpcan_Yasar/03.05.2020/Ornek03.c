#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int b = 10;
	int basamak = 1;
	printf("Sayi Girin: ");
	scanf("%d",&a);
	while (abs(a/b)>0) {
		b *= 10;
		basamak++;
	}
	printf("Basamak Sayisi: %d", basamak);
	return 0;
}
