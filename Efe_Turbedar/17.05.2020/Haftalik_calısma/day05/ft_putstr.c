#include "ft_putchar.c"
int i;
void ft_putstr(char *str);
int main(){
 ft_putstr("merhaba");
}

void ft_putstr(char *str){
	for(i=0;str[i]!='\0';i++){ft_putchar(str[i]);}
}
