void ft_putchar(char c);
int ft_str_is_uppercase(char *str);

int main(int argc,char *argv[]){
ft_putchar(ft_str_is_uppercase(argv[1]));

}

int ft_str_is_uppercase(char *str){
int a=0;

while(str[a]!='\0'){

if(str[a]>='A'&& str[a]<='Z')
a++;
else return '0';
}
return '1';

}

