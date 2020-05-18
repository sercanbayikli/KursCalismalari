#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str) {
	int a = 0;
	while (str[a] != '\0') {
		a++;
	}
	return a;
}

int main() {
	char str[10] = "altugga";
	ft_strlen(str);
}
