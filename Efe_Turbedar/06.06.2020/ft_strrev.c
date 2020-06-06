char *ft_strrev(char *str);
char *ft_strrev(char *str){
    int i,j;  
    for(i=0;str[i]!='\0';i++){}
    for(j=0;i>=0;i--){str[j]=str[i];j++;}
    return (str);
}
int main(void){
    char a[] = "dfrgg";
	char *b;
	b = a;
	ft_strrev(b);
}
