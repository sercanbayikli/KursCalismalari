char inter(char *str1, char *str2);
#include "ft_putchar.c"
int main(){
char a[]="rien",b[]="cette phrase ne cache rien",*c,*d;
c=a;
d=b;
inter(c,d);
return 0;}


char inter(char *str1, char *str2){
int i,j,k;
for(i=0;str1[i] != '\0';i++){

for(j=i;str2[j] != '\0';j++){
 if(str1[i]==str2[j]){
 	ft_putchar(str2[j]);
	break;
 }

}

}

}
