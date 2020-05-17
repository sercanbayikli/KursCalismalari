void ft_putchar(char c);
void ft_print_comb();


int main(){

ft_print_comb();
}



void ft_print_comb(){
char c;
int a=0,b,d;

while(a<=9){

	b=a+1;
	while(b<=9){
		d=b+1;
		while(d<=9){
			ft_putchar((a+'0'));
			ft_putchar((b+'0'));
			ft_putchar((d+'0'));
			if ((a+'0') != '7' || (b+'0') != '8' || (c+'0') != '9'){
				ft_putchar(',');
				ft_putchar(' ');
			}
			d++;
}
		b++;
}
	a++;	

}
}

