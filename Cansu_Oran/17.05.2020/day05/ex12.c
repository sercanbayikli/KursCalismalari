void ft_putchar(char c);
int ft_str_is_numeric(char *str);

int main(int argc,char *argv[]){
ft_putchar(ft_str_is_numeric(argv[1]));

}

int ft_str_is_numeric(char *str){
int a=0;

while(str[a]!='\0'){

if(str[a]>='0'&& str[a]<='9')
a++;
else return '0';
}
return '1';

}
