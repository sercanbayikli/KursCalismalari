#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int b = 1000000000;
	printf("Sayi Girin: ");
	scanf("%d",&a);
	while (abs(a/b) < 1) {
		b = b / 10;
	} 
	while (b!=0) {
		printf("%d\n",abs(a/b));
		a -= a/b * b;	
		b = b / 10;
	}	
	return 0;
}
