char *ft_strncpy(char *dest, char *src, unsigned int n);
int main(){
  char *a,*b;
  a="merhaba";
  ft_strncpy(b,a,3);
}
char *ft_strncpy(char *dest, char *src, unsigned int n){
    int i;
    for(i=0;i<n;i++){
      dest[i]=src[i];
    }
    return (dest);
}


