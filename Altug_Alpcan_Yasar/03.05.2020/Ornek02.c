#include <stdio.h>
int main() {
	int a,b,c;
	printf("1. Sayiyi Girin: ");
	scanf("%d",&a);
	printf("2. Sayiyi Girin: ");
	scanf("%d",&b);
	printf("Islemi Secin (1/Toplama-2/Cikarma-3/Carpma-4/Bolme): ");
	scanf("%d",&c);
	if (c == 1) {
		a = a + b;	
	}
	else if (c == 2) {
		a = a - b;
	}
	else if (c == 3) {
		a = a * b;
	}
	else if (c == 4) {
		a = a / b;
	}
	else {
		printf("Gecersiz Islem");
		return 0;
	}
	printf("Sonuc = %d",a);
	return 0;
}
