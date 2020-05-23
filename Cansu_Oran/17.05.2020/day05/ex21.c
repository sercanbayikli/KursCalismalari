void ft_putchar(char c);
int ft_atoi_base(char *str, char *base);
void ft_putnbr(int nb);
int ft_atoi(char *c);


int main(int argc,char *argv[]){
ft_atoi_base(argv[1],argv[2]);

}

char koy(char c)
{
    if (c >= '0' && c <= '9')
        return (int)(c - '0');
    else
        return (int)(c + 10 - 'A');
}


int ft_atoi_base(char *str, char *base){
int a=1,b=ft_atoi(base),len,nb=0;
while(str[len]) len++;
for(int i=len-1;i>=0;i--){
 if (koy(str[i]) >= b){ 
     
           return -1; 
        } 
  
        nb += koy(str[i]) * a; 
        a = a * b; 
    } 
  
    ft_putnbr(nb); 


}


