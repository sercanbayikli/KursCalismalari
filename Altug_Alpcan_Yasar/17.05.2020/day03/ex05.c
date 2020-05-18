#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str) {
	for (int i = 0; i < 10; i++) {
		if (str[i] == '\0') {
			break;
		}
		else {
			ft_putchar(str[i]);
		}
	}
}

int main() {
	char str[10] = "scienitive";
	ft_putstr(str);
}
