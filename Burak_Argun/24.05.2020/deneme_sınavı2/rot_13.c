#include <unistd.h>

int ft_putchar(char c)
{
 return (write(1, &c , 1));
}

void ft_rot_13(char *str)
{
 while (*str++)
 {
  if ('a' <= *(str - 1) && *(str - 1) <= 'z')
   ft_putchar(((*(str - 1) - 'a' + 13) % 26) + 'a');
  else if ('A' <= *(str - 1) && *(str - 1) <= 'Z')
   ft_putchar(((*(str - 1) - 'A' + 13) % 26) + 'A');
  else
   ft_putchar(*(str - 1));
 }
}

int main(int a, char *c[])
{
 if (a == 2)
 ft_rot_13(c[1]);
 ft_putchar('\n');
 return 0;
}
