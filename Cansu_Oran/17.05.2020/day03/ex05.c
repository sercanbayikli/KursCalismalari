
void ft_putchar(char c);
void ft_putstr(char *str);

int main(){
char c[]="cansu";
ft_putstr(c);
}

void ft_putstr(char *c){

if (c)
{
 while (*c != '\0')
 {
 ft_putchar(*c);
 c++;
}
}
}
