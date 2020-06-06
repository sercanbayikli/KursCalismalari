char onion(char *str1, char *str2,...);
#include "ft_putchar.c"
int main(){
char a[]="rien",b[]="cette phrase ne cache rien",*c,*d;
c=a;d=b;
onion(c,d);
return 0;}

char onion(char *str1, char *str2,...){
int i,j,k,l=0,m;
char a[100];
   for(j=0;str1[j]!='\0';j++){
	k=0;
	for(m=0;a[m]!='\0';m++){
	if(str1[j]==a[m]){k=1;break;}}
   if(k==0){
    a[l]=str1[j];l++;
    ft_putchar(str1[j]);}
}




for(j=0;str2[j]!='\0';j++){
k=0;
        for(m=0;a[m]!='\0';m++){
	if(str2[j]==a[m]){k=1;break;}}
  
  if(k==0){
    a[l]=str2[j];l++;
    ft_putchar(str2[j]);}
}

ft_putchar('\n');
}

