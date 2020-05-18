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
 {
  ft_putchar(nb + '0');
 }
}

void ft_ultimate_div_mod(int *a, int *b)
{
  int tmp1;
  int tmp2;
  
  tmp1 = *a / *b;
  tmp2 = *a % *b;
  *a = tmp1;
  *b = tmp2;
}

int main(void)
{
 int i;
 int n;
 int *a;
 int *b;
  
 i = 4;
 n = 2;
 a = &i;
 b = &n;
  
ft_putnbr(*a);
 ft_putchar('\n');
ft_putnbr(*b);
 ft_putchar('\n');
ft_ultimate_div_mod( a, b);
ft_putnbr(*a);
 ft_putchar('\n');
ft_putnbr(*b);
 ft_putchar('\n'); 	
 return (0);
}
