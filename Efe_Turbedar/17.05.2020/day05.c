#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void ft_putchar(char c){
        write(1,&c,1);
}

void ft_print_comb2(void){
        int i,j;
	for(i=48;i<58;i++){
		for(j=48;j<58;j++){
		ft_putchar(i);
		ft_putchar(j);
		ft_putchar(',');
		}
	}

}

int main(){
        ft_print_comb2();
        return 0;
}

