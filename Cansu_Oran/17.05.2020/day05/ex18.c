void ft_putchar(char c);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int ft_atoi(char *c);
void ft_putnbr(int nb);

int main(int argc,char *argv[]){
ft_putnbr(ft_strlcat(argv[1],argv[2],ft_atoi(argv[3])));

}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
int a=0,b=0,c;
while(dest[a]) a++;
while(src[b]) b++;
c=a+b;
b=0;
while((a+b)<size){

dest[a+b]=src[b];
b++;
}
dest[a+b]='\0';
return (c);

}





