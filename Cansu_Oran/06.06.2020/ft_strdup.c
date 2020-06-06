void ft_putchar(char c);
char *ft_strdup(char *src);
#include <stdlib.h>

int main(int argc,char *argv[]) {
if( argc!=2) return 0;
else {
char *copy = ft_strdup(argv[1]);
int a=0;
while(copy[a]){
ft_putchar(copy[a]);
a++;
}}
}

char *ft_strdup(char *src){
int a=0,b=0;
char *dest;
while (src[b])
b++;
dest = (char*)malloc(sizeof(*dest) * b + 1);
while (a < b)
{
dest[a] = src[a];
a++;
}
dest[a] = '\0';
return (dest);



}
