#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
 int i=0;
 while (src[i] != '\0')
  {
   dest[i] = src[i];
   i++;
  }
  dest[i] = src[i];
  return (dest);
}

int main(void) 
{
 char str[] = "string";
 char dest[] = "copy";
 printf("%s", ft_strcpy(dest, str));
 return 0;
}
