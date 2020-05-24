#include <stdio.h>
#include <stdlib.h>

int ft_putnbr(int nb){
	printf("%d", nb);
}
int main(int argc, char *argv[]){
	int x = atoi(argv[1]);
	ft_putnbr(x);
	return 0;
}
