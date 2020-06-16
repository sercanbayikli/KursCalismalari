#include "ft_putchar.c"

int main(int argc, char *argv[]){
int i=0;
if (argc>1){
	while(argv[argc - 1][i]){
		ft_putchar(argv[argc - 1][i++]);
		}
	}
	ft_putchar('\n');
}
