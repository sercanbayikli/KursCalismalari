#include "ft_putchar.c"
void hello(void);
char hel[]="Hello World!";
int main(){
hello();
}

void hello(){
int i;
for(i=0;hel[i-1]!='!';i++){
ft_putchar(hel[i]);
}
}
