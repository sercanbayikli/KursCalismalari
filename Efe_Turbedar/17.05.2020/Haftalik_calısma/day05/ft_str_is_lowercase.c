int i=0;
int ft_str_is_lowercase(char *str);
int main(){
  char a[]="}}";
  ft_str_is_lowercase(a);
return 0;
}

int ft_str_is_lowercase(char *str){

  for(int i=0;str[i]!='\0';i++){
    if(str[i]<97 || str[i]>123){
      return 0;}
  }
  return 1;
}

