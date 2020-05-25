void ft_putchar(char c);
char    *ft_strcpy(char *s1, char *s2);

int main(int argc, char *argv[]){
if(argc==3)
ft_strcpy(argv[1],argv[2]);
}

char    *ft_strcpy(char *s1, char *s2){
int a=0;
while(s2[a]){
s1[a]=s2[a];
ft_putchar(s1[a]);
a++;

}
while(s1[a]){
s1[a]='\0';
a++;
}


}
