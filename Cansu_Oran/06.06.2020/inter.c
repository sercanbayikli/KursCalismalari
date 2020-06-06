void ft_putchar(char c);

int main(int argc,char *argv[]){
if(argc!=3) return 0;
else{
int d,a=0;
while(argv[1][a]){
d=0;
for(int b=0;argv[2][b]!='\0';b++){
if(argv[2][b]==argv[1][a]){ d=1;}

}
if(d==0){
int c=a;
while(argv[1][c]){
argv[1][c]=argv[1][c+1];
c++;
}
a--;
}
a++;
}
a=0;
while(argv[1][a]){
ft_putchar(argv[1][a]);
a++;

}

}
}
