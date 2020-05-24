void ft_putchar(char c);
void aff_a(char *c);

int main(int argc,char *argv[]){
if(argc!=2){
ft_putchar('z');
ft_putchar('\n');
return 0;
}
else{
int a=0,b=0;

while(argv[1][a] && b!=1 ){
if(argv[1][a]=='z') {ft_putchar(argv[1][a]);ft_putchar('\n');
 b=1;}
a++;
}
if(b==0) ft_putchar('\n');
}}

