#include "ft_putchar.c"
char last_word(char *str,...);
int main(){
last_word("FOR	PONY","adsa");
}

char last_word(char *str,...){
int i=0,k;
while(str[i]!='\0'){i++;}
while(str[i-1]>32){i--;}
while(str[i]!='\0'){ft_putchar(str[i]);i++;}
ft_putchar('\n');
}
