#include <unistd.h>

void ft_putstr(char *str) {
int x = 0;
while(str[x] != '\0') {
write(1,&str[x],1);
x++;
}
}
