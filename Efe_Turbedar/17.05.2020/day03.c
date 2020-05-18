#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void ft_putchar(char c){
        write(1,&c,1);
}

void ft_is_negative(int n){
        if(n<0){ft_putchar('N');}
	else if(n>0){ft_putchar('P');}
      	else if(n==0){ft_putchar('X');}
}

int main(int argc, char *argv[]){
	int arg = strtol(argv[1], NULL, 10);	
        ft_is_negative(arg);
        return 0;
}

