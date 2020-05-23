int i,j;
char *ft_strncat(char *dest, char *src,int nb);
int main(){
  char a[]="iyi ",b[]="aksamlar";
  ft_strncat(a,b,4);
  return 0;
}
char *ft_strncat(char *dest, char *src,int nb){

  for (i=0;dest[i]!='\0';i++){}
  for(j=0;j<nb;j++){
     dest[i+j]=src[j];
  }
  return dest;
}
