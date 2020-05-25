void ft_putchar(char c);

int main(int argc,char *argv[]){

int a=0;
while(argv[1][a]){
if(argv[1][a]==argv[2][0]) argv[1][a]=argv[3][0];
ft_putchar(argv[1][a]);
a++;
}

}
