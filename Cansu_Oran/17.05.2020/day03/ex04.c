
void ft_ultimate_div_mod(int *a, int *b);

int main(){
int a = -1,b = 3;

ft_ultimate_div_mod(&a, &b);}

void ft_ultimate_div_mod(int *a, int *b)
{
 int div,mod;

 if (*b != 0)
 {
 div = (*a) / (*b);
 mod = (*a) % (*b);
 *a = div;
 *b = mod;
}
}
