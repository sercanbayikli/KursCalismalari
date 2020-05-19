void ft_putchar(char c);
int ft_strlen(char *str);

int main(){
char c[]="cansusu";
ft_strlen(c);

}

int ft_strlen(char *c){

if (c)
{int d=0;
 while (*c != '\0')
 {
d++;
 c++;
}
ft_putchar((d+'0'));
}


}
