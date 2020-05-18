void ft_putchar(char c);
void ft_swap(int *a,int *b);
int main(){
*a=5;
*b=3;
ft_swap(*a,*b);

}

void ft_swap(int *a,int *b){

int tmp_a;

    tmp_a = *a;
    *a = *b;
    *b = tmp_a;

}
