void ft_swap(int *a, int *b);

int main(){
int c=1,d=2;

ft_swap(&c,&d);


}

void ft_swap(int *a, int *b){

int ok;
 if (a && b)
{
 ok = *a;
 *a = *b;
 *b = ok;
}
}
