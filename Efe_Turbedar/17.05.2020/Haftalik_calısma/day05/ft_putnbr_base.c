#include "ft_putchar.c"
void ft_putnbr_base(int nbr, char *base);
int main(){
  char *base;
ft_putnbr_base(002002,base);
}
void ft_putnbr_base(int nbr, char *base){
if (nbr < 0){
		ft_putchar('-');
		nbr = nbr * -1;
	}
    if (nbr > 9){
      ft_putnbr_base(nbr/10,base);
      ft_putnbr_base(nbr%10,base);
    }
    else{
      ft_putchar(nbr+48);
    }
}


