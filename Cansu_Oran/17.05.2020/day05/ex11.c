void ft_putchar(char c);
int ft_str_is_alpha(char *str);

int main(int argc,char *argv[]){
ft_putchar(ft_str_is_alpha(argv[1]));
}

int ft_str_is_alpha(char *str){
int a=0;
while(str[a]==str[a+1]+1){
a++;
if(str[a+1]=='\0'&& str[a]==str[a-1]-1) return '1';

}

a=0;
while(str[a]==str[a+1]-1){
a++;
if(str[a+1]=='\0'&& str[a]==str[a-1]+1) return '1';

}
if(str[0]=='\0') return '1';
return '0';
}
