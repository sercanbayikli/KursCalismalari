void ft_putchar(char c);
void ft_putnbr(int x){
if(x>=0 && x< 10){
 ft_putchar((x+'0'));

}
else if(x>=10){
ft_putnbr(x/10);
ft_putchar(((x%10)+'0'));

}
else{
ft_putchar('-');
ft_putnbr(x*-1);


}

}


