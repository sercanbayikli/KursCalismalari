#include "ft_putchar.h"
int c = 0;
void ft_putnbr(int nb) {
	if (nb < 0) {
		ft_putchar('-');
		nb *= -1; 
	}
	for (long long int i = 10000000000; i > 0; i /= 10) {
		if (c == 1) {
			ft_putchar(nb/i + '0');
			nb -= (nb/i) * i;
		}
		else if (nb / i >= 1) {
			c = 1;
			ft_putchar(nb/i + '0');
			nb -= (nb/i) * i;
		}
	}
}

int main() {
	ft_putnbr(42);
}
