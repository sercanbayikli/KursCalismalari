#include <unistd.h>

void ft_print_alphabet(){
	char x;
        for(x='z'; x<='a'; x--){
          write(1,&x,1);
        }
}
