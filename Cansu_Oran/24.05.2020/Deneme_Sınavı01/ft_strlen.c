void ft_putchar(char c);
int	ft_strlen(char *str);
void ft_putnbr(int nb);
int main(int argc,char *argv[]){

ft_putnbr(ft_strlen(argv[1]));
}

int     ft_strlen(char *str){
int a=0;

while(str[a]){
a++;
}

return a;
}
