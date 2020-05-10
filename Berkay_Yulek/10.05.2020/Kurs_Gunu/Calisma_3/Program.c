#include <stdio.h>
#include "Fonk1.h"
#include "Fonk2.h"
#include "Fonk3.h"

char kelime[20];
int c,a,b;

int main() {

printf("Lutfen Calistirmak Istediginiz Fonksiyonu Secin\n 1-Toplam Harf Sayisini Ekrana Yazar\n 2-Yaziyi Tersten Yazar\n 3-'a' Harflerini 'q' Harfine Cevirir\n : ");
scanf("%d",&c);

if(c==1) { Fonk1(); }
else if(c==2) { Fonk2(); }
else if(c==3) {Fonk3(); }
else { printf("Hatali Secim Yaptiniz"); }

return 0;

}

