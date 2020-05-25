#include <unistd.h>

void ft_putchar(char c)
{
 write(1, &c, 1);
}

void rotone(char *c)
{
 while (*c)
 {
  if ((*c >= 'A' && *c <= 'Y') || (*c >= 'a' && *c <= 'y'))
   ft_putchar(*c + 1);
  else if (*c == 'Z' || *c == 'z')
   ft_putchar(*c - 25);
  else
   ft_putchar(*c);
   c++;
 }
}

int main(int a, char **c)
{
 if (a == 2)
 rotone(c[1]);
 ft_putchar('\n');
 return 0;
}
