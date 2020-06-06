void ft_putchar(char c);
int ft_atoi(char *c);
void ft_putnbr(int nb);


int main(int argc,char *argv[]){
if (argc!=4)  return 0;
int sonuc;

switch(argv[2][0]){
case '+': sonuc=ft_atoi(argv[1])+ft_atoi(argv[3]);
break;
case '-': sonuc=ft_atoi(argv[1])-ft_atoi(argv[3]);

break;
case '*':sonuc=ft_atoi(argv[1])*ft_atoi(argv[3]);

break;
case'/':sonuc=ft_atoi(argv[1])/ft_atoi(argv[3]);

break;
case '%':sonuc=ft_atoi(argv[1])%ft_atoi(argv[3]);

break;



}

ft_putnbr(sonuc);
}
