#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c){
        write(1,&c,1);
}

void ft_print_alphabet(void){
	int i;
	for(i=97;i<123;i++){
		ft_putchar(i);
	}
}

int main(){
	ft_print_alphabet();
	return 0;
}
