int i=0;
char *ft_strupcase(char *str);
int main(){
  char a[3]="abc";
  ft_strupcase(a);
return 0;
}

char *ft_strupcase(char *str){
  for(int i=0;str[i]!='\0';i++){
    str[i]=str[i]-32;
   }
   return (str);
}

