#include<stdio.h>

int main()
{
    int sayi,sayibasamaklari;
   
    printf("Bir sayi giriniz =\n");
    scanf("%d",&sayi);
    sayibasamaklari=1;
    while(sayi>=10)
    {  
     sayi=sayi/10;
      sayibasamaklari++;
    }
      printf("Basamak sayisi = %d",sayibasamaklari);
}
