#include <stdio.h>
#include <string.h>

void ft_print_alphabet(void){
	char x;
	for(x='a'; x<='z'; x++){
		printf("%c", x);
	}
}
int main(void){
	ft_print_alphabet();
	return 0;
}
