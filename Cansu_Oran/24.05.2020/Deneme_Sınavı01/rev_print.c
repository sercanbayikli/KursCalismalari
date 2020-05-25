void ft_putchar(char c);

int main(int argc,char *argv[]){
if(argc!=2) return 0;
int a=0;
while(argv[1][a]) a++;
while(a+1){
ft_putchar(argv[1][a]);
a--;
}
}
