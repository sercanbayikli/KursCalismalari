void ft_putchar(char c);
void ft_putstr(char *str);
int main(int argc,char *argv[]){
if(argc!=2) return 0;
ft_putstr(argv[1]);
}
void ft_putstr(char *str){
while (*str != '\0'){
ft_putchar(*str);
str++;
}
}
