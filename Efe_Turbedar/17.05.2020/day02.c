#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c){
        write(1,&c,1);
}

void ft_print_numbers(void){
        int i;
        for(i=48;i<58;i++){
                ft_putchar(i);
        }
}

int main(){
        ft_print_numbers();
        return 0;
}

