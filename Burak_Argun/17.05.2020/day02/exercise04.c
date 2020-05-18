#include <stdio.h>

int ft_putchar(char c)
{
 printf("%c",c);
 return(0);
}
void ft_print_var(char a, char b, char c)
{
 ft_putchar(a);
 ft_putchar(b);
 ft_putchar(c);
}

void ft_print_comb(void)
{
char a;
char b;
char c;
a = '0';

while (a <= '7')
{
 b = a + 1;
 while (b <= '8')
  {
   c = b + 1;
    while (c <= '9')
    {
     printf("%c%c%c, ", a, b, c);
     c++;
    }
   b++;
  }
 a++;
}
}
int main ()
{
 ft_print_comb();
 return(0);
}
