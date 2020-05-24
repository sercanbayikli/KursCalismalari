#include <unistd.h>

void ft_print_numbers(void) {
	char dgt = '0';
	for (int i = 0; i <= 9; i++) {
		write(1,&dgt,1);
		dgt++;
	}
}

int main() {
	ft_print_numbers();
	return 0;
}
