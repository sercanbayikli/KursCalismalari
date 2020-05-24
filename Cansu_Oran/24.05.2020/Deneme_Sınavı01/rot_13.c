void ft_putchar(char c);

int main(int argc,char *argv[]){
int a=0;

while(argv[1][a]){

if (argv[1][a] >= 'A' && argv[1][a] <= 'M'){
ft_putchar(argv[1][a] + 13);
}
else if (argv[1][a] >= 'N' && argv[1][a] <= 'Z'){
ft_putchar(argv[1][a] - 13);}
else if (argv[1][a] >= 'a' && argv[1][a] <= 'm'){
ft_putchar(argv[1][a] + 13);
}
else if (argv[1][a] >= 'n' && argv[1][a] <= 'z'){
ft_putchar(argv[1][a] - 13);
}
else{
ft_putchar(argv[1][a]);
}

a++;
}}
