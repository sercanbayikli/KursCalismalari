#include <unistd.h>

void ft_putchar(char c)
{
 write (1, &c, 1);
}

void ft_putstr(char *str)
{
 int i;
 i = 0;

 while (str[i])
 {
  ft_putchar(str[i]);
  i++;
 }
}

int main(int argc, const char *argv[])
{
 char str[] = {'f' ,'t' ,'_' ,'p' ,'u' ,'t' ,'s' ,'t' ,'r'};
 ft_putstr(str);
 return 0;
}
