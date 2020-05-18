#include <unistd.h>

void ft_putchar(char c)
{
 write (1, &c, 1);
}

void ft_putnbr(int nb)
{
 if (nb < 0)
 {
  nb = -nb;
  }
 if (nb >= 10)
 {
 ft_putnbr(nb / 10);
 ft_putnbr(nb % 10);
 }
 else
 ft_putchar(nb + '0');
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
  *div = a / b;
  *mod = a % b;
}

int main(void)
{
 int a;
 int b;
 int *div;
 int *mod;

 a = 4;
 b = 2;
  
 ft_putnbr(a);
 ft_putchar('\n');
 ft_putnbr(b);
 ft_putchar('\n');
 ft_div_mod( a, b, div, mod);
 ft_putnbr(*div);
 ft_putchar('\n');
 ft_putnbr(*mod);
 return (0);
}
