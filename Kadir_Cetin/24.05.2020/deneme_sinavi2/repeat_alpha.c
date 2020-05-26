#include <unistd.h>
int repeat_alpha(int a, char **c)
{
int harf;
int tekrar;
harf = 0;

while (c[1][harf])
{

tekrar = 1;

if (c[1][harf] >= 'a' && c[1][harf] <= 'z')
tekrar += c[1][harf] - 'a'; 
else if (c[1][harf] >= 'A' && c[1][harf] <= 'Z')
tekrar += c[1][harf] - 'A';
while (tekrar)
{
write(1, &c[1][harf], 1);
tekrar--;
}
harf++;
}
write(1, "\n", 1);
return 0;
}
