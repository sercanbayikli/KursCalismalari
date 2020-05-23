void ft_putchar(char c);
char *ft_strcpy(char *dest, char *src);

int main(int argc,char *argv[]){
 ft_strcpy(argv[1],argv[2]);

}

char *ft_strcpy(char *dest, char *src){
int a=0;
while(src[a]!='\0'){
dest[a]=src[a];
a++;
}
while(dest[a]!=0){
dest[a]='\0';
a++;
}
a=0;
while(src[a]!='\0'){
ft_putchar(src[a]);
a++;
}
ft_putchar(' ');
a=0;
while(dest[a]!='\0'){
ft_putchar(dest[a]);
a++;
}

}
