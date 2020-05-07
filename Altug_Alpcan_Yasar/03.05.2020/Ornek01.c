#include <stdio.h>
int main() {
	int a = 0;
	int toplam = 0;
	for (int i = 0; i < 10; i++) {
		printf("Sayi Girin: "); 
		scanf("%d",&a), toplam += a;
	}
	printf("Ortalama = %d",toplam/10);
	return 0;
}
