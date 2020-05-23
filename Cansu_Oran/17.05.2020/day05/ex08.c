void ft_putchar(char c);
char *ft_strupcase(char *str);

int main(int argc, char *argv[]){
ft_strupcase(argv[1]);

}

char *ft_strupcase(char *str){
int a=0;
while(str[a]!='\0'){

if(str[a] >= 97 && str[a] <= 122){
str[a] = str[a] - 32;
}
ft_putchar(str[a]);
a++;
}

}
