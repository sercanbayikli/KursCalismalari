void ft_putchar(char c);
void ft_putnbr_base(int nb, char *base);
int ft_atoi(char *c);

int main(int argc,char *argv[]){
ft_putnbr_base(ft_atoi(argv[1]),argv[2]);

}

char koy(int nb) 
{ 
    if (nb >= 0 && nb <= 9) 
        return (char)(nb + '0'); 
    else
        return (char)(nb - 10 + 'A'); 
} 

void cevir(char *kod){
int len=0;
while(kod[len]) len++;
for (int i = 0; i < len/2; i++) 
    { 
      char temp = kod[i]; 
      kod[i] = kod[len-i-1]; 
      kod[len-i-1] = temp; 
    } 
}

void ft_putnbr_base(int nb, char *base){
char kod[100];
int a=0,b=ft_atoi(base);

while(nb>0){
kod[a++]=koy(nb%b);
nb /=b;
}
kod[a]='\0';
cevir(kod);
a=0;
while(kod[a]){ ft_putchar(kod[a]); a++;}

}
