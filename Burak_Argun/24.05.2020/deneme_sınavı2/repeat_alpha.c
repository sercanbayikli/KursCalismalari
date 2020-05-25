#include <unistd.h>
int main(int a, char **c)
{
 int harf;
 int tsayisi;

 if (a == 2)
 {
  harf = 0;
  while (c[1][harf])
  {
   tsayisi = 1;
   if (c[1][harf] >= 'a' && c[1][harf] <= 'z')
   tsayisi += c[1][harf] - 'a'; 
   else if (c[1][harf] >= 'A' && c[1][harf] <= 'Z')
   tsayisi += c[1][harf] - 'A';
   while (tsayisi)
    {
     write(1, &c[1][harf], 1);
     tsayisi--;
    }
   harf++;
  }
 }
 write(1, "\n", 1);
 return 0;
}
