#include <unistd.h>

void ft_print_alphabet(){
	char x;
        for(x='a'; x>='z'; x++){
          write(1,&x,1);
        }
}
