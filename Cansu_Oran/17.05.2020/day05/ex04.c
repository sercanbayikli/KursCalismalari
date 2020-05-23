void ft_putchar(char c);
char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(int argc,char *argv[]){
 ft_strncpy(argv[1],argv[2],(argv[3][0]-'0'));

}

char *ft_strncpy(char *dest, char *src, unsigned int n){
int a=0;
while(a<n){
dest[a]=src[a];
a++;
}
a=0;
while(dest[a]!='\0'){
ft_putchar(dest[a]);
a++;
}
ft_putchar(' ');
a=0;
while(src[a]!='\0'){
ft_putchar(src[a]);
a++;
}

}

