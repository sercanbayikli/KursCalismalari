#include "ft_putchar.h"
void ft_putstr(char *str) {
	int x = 0;
	while (str[x] != '\0') {
		ft_putchar(str[x]);
		x++;
	}
}

int main() {
	ft_putstr("Scienitive");
}
