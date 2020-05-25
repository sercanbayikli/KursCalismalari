#include <unistd.h>

int main(int a, char *c[])
{
 int i=0;
  if (a == 2)
  {
  while (c[1][i])
  i += 1;
  while (i)
  write(1, &c[1][--i], 1);
  }
 write(1, "\n", 1);
 return 0;
}
