#include	<unistd.h>

int	ft_countdown(void)
{
	char    giris;
	char    bitis;
	giris = '9';
	bitis = '0';
	while (giris >= bitis)
	{
		write(1, &giris, 1);
		giris--;
	}
}
