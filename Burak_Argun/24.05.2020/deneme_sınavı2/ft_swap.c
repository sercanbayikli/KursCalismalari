#include <stdio.h>

void ft_swap(int *a, int *b)
{
int tmp;
*a = tmp;
tmp = *b;
*b = *a;
*a = tmp;
}

int main(int argc, const char *argv[])
{
 int a;
 int b;
 int *ab;
 int *ba;

 a = 0;
 b = 1;
 ab = &a;
 ba = &b;

 printf("%d %d \n", a, b);
 ft_swap(ab, ba);
 printf("%d %d \n", a, b);
 return 0;
}
