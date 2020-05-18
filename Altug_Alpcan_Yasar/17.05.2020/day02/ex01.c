#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet() {
	for (int i = 'z'; i >= 'a'; i--) {
		ft_putchar(i);
	}
}

int main() {
	ft_print_reverse_alphabet();
	return 0;
}
