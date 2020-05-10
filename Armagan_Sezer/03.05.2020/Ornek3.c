#include<stdio.h>

int main()
{
    int sayi,basamak;
   
    printf("sayi giriniz:");
    scanf("%d",&sayi);
    basamak=1;
    while(sayi>=10){  
    	sayi=sayi/10;
      	basamak++;
    }

      printf("Basamak sayisi: %d",basamak);
}
