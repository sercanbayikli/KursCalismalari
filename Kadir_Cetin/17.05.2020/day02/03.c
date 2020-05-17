#include <unistd.h>


void	ft_is_negative(int a)
{
	if (a < 0)
		write(1,"N",1);
	else
		write(1,"P",1);
}
