#include <stdio.h>
#include <stdlib.h>

void ft_is_negative(int n){
	if(n<0){
		printf("N");
	}
	else if(n>0 || n==0){
		printf("P");
	}
}
int main(int argc, char *argv[]){
	int x = atoi(argv[1]);
	ft_is_negative(x);
	return 0;
}
