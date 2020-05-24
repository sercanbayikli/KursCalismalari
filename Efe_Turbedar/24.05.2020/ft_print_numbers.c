#include "ft_putchar.c"

void	ft_print_numbers(void);
int main(){
ft_print_numbers();
return 0;
}

void	ft_print_numbers(void){
int i;
for(i=0;i<10;i++){
ft_putchar(i+48);
}
}
