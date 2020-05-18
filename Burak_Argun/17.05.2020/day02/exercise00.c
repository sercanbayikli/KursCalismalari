#include <stdio.h>


void ft_putchar(char harf)
{
  printf("%c",harf);
}


void ft_print_alphabet(void)
{
  char a = 'a';
  char z = 'z';
    while ( a <= z) {
    ft_putchar(a);
    a++;
  }

}

int main()
{
  ft_print_alphabet();
  return(0);
}
