#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_is_negative(int n) {
	if (n < 0) {
		ft_putchar('N');
	}
	else {
		ft_putchar('P');
	}
}

int main() {
	int a;
	printf("Sayi Gir: ");
	scanf("%d",&a);
	ft_is_negative(a);
	return 0;
}
