#include "ft_putchar.c"
void ft_putnbr(int nb);
int main(){
ft_putnbr(42);
}
void ft_putnbr(int nb){
    if (nb > 9){
      ft_putnbr(nb/10);
      ft_putnbr(nb%10);
    }
    else{
      ft_putchar(nb+48);
    }
}
