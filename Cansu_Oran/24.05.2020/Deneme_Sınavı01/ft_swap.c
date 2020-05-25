void ft_putchar(char c);
void ft_swap(int *a, int *b);

int main(){
int a=1,b=2,*c,*d;
*c=&a;
*d=&b;
ft_swap(c,d);

}




void ft_swap(int *a, int *b){
 int c;
 c = *a;
 *a = *b;
 *b = c;
}
