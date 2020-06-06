void ft_putchar(char c);
char *ft_strrev(char *str);

int main(){
char c[]="cansucum";
ft_strrev(c);

}

char *ft_strrev(char *c){
int a=0,b=0;
char ok;
while(c[a]!='\0'){a++;}
 
while(b<a/2){
ok=c[b];
c[b]=c[a-b-1];
c[a-b-1]=ok;
b++;

}
b=0;
while(c[b]!='\0'){
ft_putchar(c[b]);
b++;
}
}

