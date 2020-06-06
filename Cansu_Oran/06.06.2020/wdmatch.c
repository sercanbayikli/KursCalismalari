void ft_putchar(char c);

int main(int argc,char *argv[]){
int a=0,d=0;
while(argv[1][a]){
for(int b=0;argv[2][b];b++){
if(argv[1][a]==argv[2][b]){ d++; break;}

}
a++;

}
if(a==d){
a=0;
while(argv[1][a]){ ft_putchar(argv[1][a]); a++;}

}

}
