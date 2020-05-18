  
#include <stdio.h>

void ft_putchar(int sayi)
{
   printf("%d", sayi);
}

void ft_print_numbers(void)
{
 char sayibaslangic;
  sayibaslangic = 0;
  while (sayibaslangic <= 9)
  {
   ft_putchar(sayibaslangic);
   sayibaslangic = sayibaslangic + 1;
  }
}
int main()
{
  ft_print_numbers();
  return (0);
}
