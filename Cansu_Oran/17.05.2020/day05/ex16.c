void ft_putchar(char c);
char *ft_strcat(char *dest, char *src);

int main(int argc,char *argv[]){
ft_strcat(argv[1],argv[2]);

}

char *ft_strcat(char *dest, char *src){
int a=0,b=0;
while(dest[a]) a++;
while(src[b]){

dest[a+b]=src[b];
b++;
}
dest[a+b]='\0';
a=0;
while(dest[a]){
ft_putchar(dest[a]);
a++;
}

}
