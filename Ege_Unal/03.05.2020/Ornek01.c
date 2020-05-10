#include <stdio.h>

int main(void) {

int sayac=0;
int a;
int toplam=0;
int ort;

while (sayac<10){

 printf("Sayı Giriniz");
 scanf("%d",&a);
 toplam=a+toplam;
 sayac++;
}

ort=toplam/10;
 printf("10 Sayının Ortalaması %d",ort);
return 0;
} 
