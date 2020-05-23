void ft_putchar(char c);
void ft_putnbr(int nb);
int ft_atoi(char *c);
int len(char *c);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(int argc,char *argv[]){

ft_putnbr(ft_strlcpy(argv[1],argv[2],ft_atoi(argv[3])));


}

int len(char *c){
int d=0;
while(c[d]) d++;
return (d);

}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
int a=0;
if (size == 0)
return (len(src));
while (src[a] && a < size - 1){
dest[a] = src[a];
a++;
}
while (dest[a]){
 dest[a] = '\0';
 a++;}
 return (len(src));
}
