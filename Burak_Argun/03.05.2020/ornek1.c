#include <stdio.h>
#include <conio.h>


int main()
{ 
    int i,sayi,ortalama;
   float n=10,toplam;
     
     
     toplam = 0;
     
      for (i=1; i<=n; i++ )
      {
      printf("%d . sayi giriniz :",i);
      scanf("%d",&sayi);
      
      toplam = toplam + sayi;
      }
      ortalama = toplam /n;
      
      printf("Girilen sayilarin ortalamasi: %d", ortalama);
        
}
