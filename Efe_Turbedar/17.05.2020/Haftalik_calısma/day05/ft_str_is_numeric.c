int i=0;
int ft_str_is_numeric(char *str);
int main(){
  char a[]="}}";
  ft_str_is_numeric(a);
  return 0;
}

int ft_str_is_numeric(char *str){
  for(int i=0;str[i]!='\0';i++){
    if(str[i]<48 || 58<str[i]){
      return 0;}
  }
  return 1;
}

