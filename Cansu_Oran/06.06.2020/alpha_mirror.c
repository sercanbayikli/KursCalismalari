void ft_putchar(char c);

int main(int argc,char *argv[]){
int a=0;

while(argv[1][a]){

if (argv[1][a] >= 97 && argv[1][a] <= 122)
ft_putchar('m' - (argv[1][a] - 'n'));
else if (argv[1][a] >= 65 && argv[1][a] <= 90)
ft_putchar('M' - (argv[1][a] - 'N'));
else
ft_putchar(argv[1][a]);
a++;;
}

}
