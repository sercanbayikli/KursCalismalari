void ft_putchar(char c);
void ft_print_comb2();

int main(){
ft_print_comb2();
}



void ft_print_comb2(){
int a=0,e=0,c;
while(a<=99){
e=a;
 while(e<=99){
	if(a!=e){
		c=a/10;
		ft_putchar(' ');

		ft_putchar((c+'0'));
		ft_putchar(((a%10)+'0'));

		ft_putchar(' ');
		c=e/10;
		ft_putchar((c+'0'));
		ft_putchar(((e%10)+'0'));
}
e++;
}
a++;
}
}
