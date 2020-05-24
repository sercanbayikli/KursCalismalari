#include "ft_putchar.c"

char *first_word(char *str,...){
int i;
for(i=0;str[i]!=0;i++){}
if(i==1){return '\n';}
for(i=0;str[i]!=0;i++){if(str[i]==' '){break;}ft_putchar(str[i]);}
ft_putchar('\n');
}
