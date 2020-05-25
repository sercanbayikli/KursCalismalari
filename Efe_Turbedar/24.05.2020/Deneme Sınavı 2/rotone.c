#include "ft_putchar.c"

void	rotone(char *str){
	while (*str){
		if ((*str >= 'A' && *str <= 'Y') || (*str >= 'a' && *str <= 'y')){
		ft_putchar(*str + 1);}
		else if (*str == 'Z' || *str == 'z'){ft_putchar(*str - 25);}
		else{ft_putchar(*str);}
		++str;
	}
}
