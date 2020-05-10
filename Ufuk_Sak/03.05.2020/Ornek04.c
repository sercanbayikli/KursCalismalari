#include <stdio.h>

int main(void){
        int sayi=0, i=0;
        printf("Sayi girin:\n"); scanf("%d", &sayi);
        do {
                i++;
                sayi = sayi/10;
		printf("%d\n", sayi);
        } while(sayi != 0);
        printf("Basamak sayisi: %d", i);
        return 0;
}
