int i=0;
char *ft_strcapitalize(char *str);
int main(){
  char a[]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
  ft_strcapitalize(a);
return 0;
}

char *ft_strcapitalize(char *str){
  str[0]=str[0]-32;
  for(int i=0;str[i]!='\0';i++){
    if(str[i+1]<123 && 96<str[i+1] && str[i]==' '){
    str[i+1]=str[i+1]-32;}
   }
   return (str);
}

