void ft_putchar(char c);

int main(int argc,char *argv[]){
if(argc<=1) ft_putchar('\n');

else{
int a=0;
while(argv[argc-1][a]){
ft_putchar(argv[argc-1][a]);
a++;
}
ft_putchar('\n');
}}

