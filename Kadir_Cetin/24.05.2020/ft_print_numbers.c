#include	<unistd.h>

int	ft_print_numbers(void)
{
	char    giris;
	char    bitis;
	giris = '0';
	bitis = '9';
	while (giris <= bitis)
	{
		write(1, &giris, 1);
		giris++;
	}
}
