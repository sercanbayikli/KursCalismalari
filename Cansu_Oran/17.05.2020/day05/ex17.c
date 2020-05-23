void ft_putchar(char c);
char *ft_strncat(char *dest, char *src,int n);

int main(int argc,char *argv[]){
ft_strncat(argv[1],argv[2],(argv[3][0]-'0'));

}

char *ft_strncat(char *dest, char *src,int n){
int a=0,b=0;
while(dest[a]) a++;
while(b<n){

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

