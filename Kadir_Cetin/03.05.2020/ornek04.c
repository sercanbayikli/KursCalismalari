#include <stdio.h>

int sayi;
int main() {
    
    printf("Bir sayı giriniz : ");
    scanf("%d",&sayi);
    
    while (sayi > 0){
        
        printf("%d \n",sayi %10);
        sayi = sayi/10;
    }
    
    return 0;
}
