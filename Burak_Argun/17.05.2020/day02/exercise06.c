#include <stdio.h>

int ft_putchar(int nb)
{
  printf("%d", &nb);
}

void ft_putnbr(int nb)
{
printf("%d", nb);
}

int main()
{
 ft_putnbr(123);
}

