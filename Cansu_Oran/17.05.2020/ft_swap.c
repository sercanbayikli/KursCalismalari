void ft_putchar(char c);
void ft_swap(int *a,int *b);
int main(){
int a=5;
int b=3;
int *c=
ft_swap(*a,*b);

}

void	ft_swap(int *a, int *b)
{
	int c;

	if (a && b)
	{
		c = *a;
		*a = *b;
		*b = c;
	}
}
