#include <unistd.h>

void ft_print_numbers(){
char	a;
while (a <= '9'){
write(1,&a,1);
a++;
}
}
