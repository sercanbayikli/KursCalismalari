
int i,j;
char *ft_strcat(char *dest, char *src);
int main(){
  char a[]="iyi ",b[]="aksamlar";
  ft_strcat(a,b);
  return 0;
}

char *ft_strcat(char *dest, char *src){
  for (i=0;dest[i]!='\0';i++){}
  for(j=0;src[j]!='\0';j++){
     dest[i+j]=src[j];
  }
  return dest;
}

