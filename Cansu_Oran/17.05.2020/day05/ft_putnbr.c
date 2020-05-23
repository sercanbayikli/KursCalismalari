void ft_putchar(char c);
void ft_putnbr(int nb){

if(nb<0){
 ft_putchar('-');
 ft_putnbr(nb*-1);
}
else if(nb>=0 && nb<=9) ft_putchar((nb+'0'));
else {
ft_putnbr(nb / 10);
ft_putnbr(nb % 10);
}

}
