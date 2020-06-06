void ft_putchar(char c);
char *ft_strcat(char *dest, char *src){
int a=0,b=0;
while(dest[a]) a++;
while(src[b]){

dest[a+b]=src[b];
b++;
}
dest[a+b]='\0';
return(dest);
}

int main(int argc,char *argv[]){
if(argc!=3) return 0;
char *dest=ft_strcat(argv[1],argv[2]);
int a=0;
while(dest[a]){
for(int b=0;dest[b]!='\0';b++){
if(dest[a]==dest[b]&& a!=b){
int c=b;
while(dest[c]){
dest[c]=dest[c+1];
c++;
}
b=b-1;
}

}


a++;
}
a=0;
while(dest[a]){ ft_putchar(dest[a]); a++;}
}
