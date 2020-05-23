void ft_putchar(char c);
char *ft_strstr(char *str, char *to_find);

int main(int argc,char *argv[]){
ft_strstr(argv[1],argv[2]);
}

char *ft_strstr(char *str, char *to_find){
int b=0,a;
while(str[b]!='\0'){
 a=0;
while(to_find[a]==str[b+a]){
a++;
if(to_find[a] == '\0'){
a=0;
while(to_find[a] != '\0'){
ft_putchar(to_find[a]);
a++;
}
} 
 
}
b++;
}

}
