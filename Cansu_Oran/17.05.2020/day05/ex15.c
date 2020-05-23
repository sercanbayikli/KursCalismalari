void ft_putchar(char c);
int ft_str_is_printable(char *str);

int main(int argc,char *argv[]){
ft_putchar(ft_str_is_printable(argv[1]));

}

int ft_str_is_printable(char *str){
int a=0;

while(str[a]!='\0'){

if(str[a]>31 && str[a]< 127)
a++;
else return '0';
}
return '1';

}
