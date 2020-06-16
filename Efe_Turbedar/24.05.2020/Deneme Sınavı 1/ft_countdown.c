#include "ft_putchar.c"
void ft_countdown();
int main(){
ft_countdown();
}

void ft_countdown(){
int i;	
for(i=9;i>=0;i--){
ft_putchar(i+48);
	}
ft_putchar('\n');
}
