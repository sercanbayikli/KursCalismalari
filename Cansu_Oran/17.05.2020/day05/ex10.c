void ft_putchar(char c);
char *ft_strcapitalize(char *str);

int main(int argc, char *argv[]){
int a=1;
while(argv[a][0]!='\0'){
ft_strcapitalize(argv[a]);
a++;
}
}

char *ft_strcapitalize(char *str){

str[0]=str[0]-32;
int b=0;
while(str[b]!='\0'){
ft_putchar(str[b]);
b++;
}
ft_putchar(' ');
}
