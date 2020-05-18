#include <stdio.h>

int ft_strlen(char *str)
{
int i;
i = 0;
 while (str[i])
 i++;
 return (i);
}

char *ft_strrev(char *str)
{
 int i;
 int strlen;
 char	a;
 i = 0;
 strlen = ft_strlen(str);
while (strlen - 1 > i)
 {
  a = str[i];
  str[i] = str[strlen - 1];
  str[strlen - 1] = a;
  strlen--;
  i++;
 }
 return (str);
}
int main()
{
 char str[100] =  "anastas mum satsana.";
 printf("%s\n", ft_strrev(str));
 return 0;
}
