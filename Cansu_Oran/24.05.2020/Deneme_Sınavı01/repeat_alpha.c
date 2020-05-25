void ft_putchar(char c);

int main(int argc,char *argv[]){
int a=0,b;
while(argv[1][a]){
if(argv[1][a]<91 && argv[1][a]>64) b=argv[1][a]-64;
else if(argv[1][a]<123 && argv[1][a]>96) b=argv[1][a]-96;
while(b){
ft_putchar(argv[1][a]);
b--;
}

a++;
}


}
