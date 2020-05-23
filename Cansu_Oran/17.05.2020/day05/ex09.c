void ft_putchar(char c);
char *ft_strlowcase(char *str);

int main(int argc, char *argv[]){
ft_strlowcase(argv[1]);

}

char *ft_strlowcase(char *str){
int a=0;
while(str[a]!='\0'){

if(str[a] >= 'A' && str[a] <= 'Z'){
str[a] = str[a] + 32;
}
ft_putchar(str[a]);
a++;
}

}
