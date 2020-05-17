#include <stdio.h>
void fp_print_comb(void)
{
int a,b,c;
a = '0';
while (a <= '7')
{
 b = a + 1;
 while (b <= '8')
  {
     c = b + 1;
     while (c <= '9')
     {
        printf("%c%c%c, ", a, b, c);
        c++;
     }
    b++;
  }
    a++;
}
}
int main (){
 fp_print_comb();
 }
