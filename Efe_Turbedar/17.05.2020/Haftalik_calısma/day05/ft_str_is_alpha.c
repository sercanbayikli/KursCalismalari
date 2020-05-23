int i=0;
int ft_str_is_alpha(char *str);
int main(){
  char a[]="}}";
  ft_str_is_alpha(a);
return 0;
}

int ft_str_is_alpha(char *str){

  for(int i=0;str[i]!='\0';i++){
    if(str[i]<65 || (90<str[i] && str[i]<97) || str[i]>123){
      return 0;}
  }
  return 1;
}

