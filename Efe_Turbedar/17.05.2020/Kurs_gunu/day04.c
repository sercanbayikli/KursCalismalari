#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
char arr[10]={"0123456789"};
void ft_putchar(char c){
        write(1,&c,1);
}

void ft_print_comb(void){
	int i,j,k;
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			for(k=j+1;k<10;k++){
			ft_putchar(arr[i]);
			ft_putchar(arr[j]);
			ft_putchar(arr[k]);
			ft_putchar(',');
			}
		}
	ft_putchar(',');
	arr[i]='\0';
	}
}

int main(){
	ft_print_comb();
	return 0;
}
