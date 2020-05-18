#include <stdio.h>

int ft_putchar(char a)
{
  printf("%s", &a);
}

void ft_is_negative(int n)
{
 if(n >= 0)
 {
  ft_putchar('P');
 }
 else
  {
   ft_putchar('N');
  }
}

int main()
{
 ft_is_negative(123);
 printf("\n");
 ft_is_negative(-123);
}
