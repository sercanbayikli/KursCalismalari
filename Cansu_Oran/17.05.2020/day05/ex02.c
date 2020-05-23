void ft_putchar(char c);
int ft_atoi(char *c);
void ft_putnbr(int nb);

int main(){
 char i[] = "-98765432";

 int n= ft_atoi(i);
 ft_putnbr(n); 
}

int ft_atoi(char *c)
{
int n=0,a=0;


if (c[0] == '-' && c[1] >= '0' && c[1] <= '9'){
n = ft_atoi(++c);
return (n * -1);
}
else if (c[0] != '-'){
 while (c[a] >= '0' && c[a] <= '9'){
  n=(n * 10)+(c[a] - '0');
a++;
}}
return (n);

}

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

