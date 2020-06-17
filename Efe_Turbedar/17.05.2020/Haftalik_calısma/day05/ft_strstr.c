char *ft_strstr(char *str, char *to_find);
int main(){
  char *a,*b;
  a="merhaba";b="erh";
  ft_strstr(a,b);
}
char *ft_strstr(char *str, char *to_find){
    int i,j,k=0;
    char tmp[10];
    for(i=0;str[i]!='\0';i++){
      for(j=0;to_find[j]!='\0';j++){
        if(str[i]==to_find[j]){
          tmp[k]=str[i];
          k++;
        }
      }
    }
    
    return (str);
}
