
void ft_sort_integer_table(int *tab, int size);
void ft_putchar(char c);
int main(){
	int a[] = {1,3,5,7,9,2,4,6,8,1,1};

	ft_sort_integer_table(a, 11);
  int i=0;
	while(a[i]!='\0'){
    	ft_putchar((a[i]+'0'));
      ft_putchar(' '); 
      i++;
}
}
void swap(int *a, int *b)
{
 int ok;

 ok = *a;
 *a = *b;
 *b = ok;
}

void ft_sort_integer_table(int *tab, int size)
{
int a=0,b;

	
while (a < size)
{
b = a;
while (b < size)
{
if (tab[a] >= tab[b])
	swap(&tab[a], &tab[b]);
 b++;
}
 a++;
}
}

