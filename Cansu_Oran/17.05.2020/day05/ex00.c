void ft_putchar(char c);
void ft_putstr(char *str);

int main(int argc,char *argv[]){

ft_putstr(argv[1]);
}

void ft_putstr(char *str){
int x=0;
while(str[x]!='\0'){
ft_putchar(str[x]);
x++;
}
}
