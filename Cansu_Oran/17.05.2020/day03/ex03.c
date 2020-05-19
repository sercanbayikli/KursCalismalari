void ft_div_mod(int a, int b, int *div, int *mod);

int main(){
int a,b;
ft_div_mod(34, 3, &a, &b); 

}
void ft_div_mod(int a, int b, int *div, int *mod)
{
if (b != 0 && div && mod)
 {
 *div = a / b;
 *mod = a % b;
 }
}
