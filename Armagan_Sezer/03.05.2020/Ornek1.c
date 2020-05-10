#include <stdio.h>

int main(void){
        int toplam=0, sayi=0;
        for(int i=0; i<10; i++){
                printf("Sayi girin:\n"); scanf("%d", &sayi);
                toplam = toplam + sayi;
        }
        printf("%d", toplam/10);
        return 0;
}
