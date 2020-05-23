int i=0;
int ft_str_is_uppercase(char *str);
int main(){
  char a[]="asdASD";
  ft_str_is_uppercase(a);
return 0;
}

int ft_str_is_uppercase(char *str){

  for(int i=0;str[i]!='\0';i++){
    if(str[i]<65 || 90<str[i]){
      return 0;}
  }
  return 1;
}

