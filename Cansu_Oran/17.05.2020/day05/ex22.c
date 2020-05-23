int ft_putchar(char c);
void ft_putstr_non_printable(char *str);
void ft_print_hex(char c);

int main(int argc,char *argv[]){
char str[]="Coucou\ntu vas bien ?";
ft_putstr_non_printable(str);
}
void ft_print_hex(char c){
	char hex[]="0123456789abcdef";
	if (c > 16)
	{
		ft_print_hex(c / 10);
		ft_print_hex(c % 10);
	}
	else
		ft_putchar(hex[c]);
}

void ft_putstr_non_printable(char *str){
	int a=0;
	while (str[a]){
		if ((str[a] < 32 && str[a] > 0) || str[a] == 127){
			ft_putchar('\\');
			if (str[a] < 16)
				ft_putchar('0');
			ft_print_hex(str[a]);
		}
		else
			ft_putchar(str[a]);
		a++;
	}
}
