#include <unistd.h>
#include <stdio.h>

int c = 0;

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb) {
	if (nb < 0) {
		putchar('-');
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
	int a;
	printf("Sayi Gir: ");
	scanf("%d",&a);
	ft_putnbr(a);
	return 0;
}
