int i=0;
int ft_str_is_printable(char *str);
int main(){
  char a[]="asdASD";
  ft_str_is_printable(a);
return 0;
}

int ft_str_is_printable(char *str){

  for(int i=0;str[i]!='\0';i++){
    if(str[i]<32 || 127==str[i]){
      return 0;}
  }
  return 1;
}


