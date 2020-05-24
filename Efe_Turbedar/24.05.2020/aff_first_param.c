#include "ft_putchar.c"
char *aff_first_param(char *str, ...);
int main(){
aff_first_param("asdasd","sdfdasf");

}

char *aff_first_param(char *str, ...){
int i;
for(i=0;str[i]!='\0';i++){
ft_putchar(str[i]);

}
ft_putchar('\n'); 
}
