#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb() {
	for (int i = '0'; i <= '9'; i++) {
		for (int j = '1'; j <= '9'; j++) {
			if (i != j && j > i) {
				for (int g = '2'; g <= '9'; g++) {
					if (j != g && i != g && g > j) {
						ft_putchar(i);
						ft_putchar(j);
						ft_putchar(g);
						ft_putchar(',');
						ft_putchar(' ');
					}
				}
			}
		}	
	}	
}

int main() {
	ft_print_comb();
	return 0;
}
