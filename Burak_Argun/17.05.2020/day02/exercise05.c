#include <stdio.h>

int ft_putchar(char b)
{
 printf("%c",b);
 return(0);
}
void ft_print_var(char a, char b)
{
 ft_putchar(a);
 ft_putchar(b);
}

void ft_print_comb2(void)
{
char a;
char b;
a = '0';

while (a <= '9')
{
 b = a + 1;
 while (b <= '9')
  {
  printf("%c%c ", a, b);
  b++;
  }
   a++;
  }
}

int main ()
{
 ft_print_comb2();
 return(0);
}

