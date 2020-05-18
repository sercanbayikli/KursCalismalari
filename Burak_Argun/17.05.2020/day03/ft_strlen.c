#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);
int main()
{
 printf("%d", ft_strlen("day03"));
 return(0);
}
int ft_strlen(char *str)
{
 int i;
 i = 0;
 while (str[++i] != '\0');
 return i;
}
