#include "ft_putchar.c"
int i,j;
char *rot_13(char *str);
char *b,a[]="AkjhZ zLKIJz , 23y ";
int main(){
b=a;
rot_13(b);

}
char *rot_13(char *str){
for(i=0;str[i]!='\0';i++){
if((str[i]>='A' && str[i] <='M') || (str[i]>='a' && str[i]<='m')){ft_putchar(str[i]+13);}
else if((str[i]>='N' && str[i] <= 'Z') || (str[i]>='n' && str[i]<='z')){ft_putchar(str[i]-13);}
else{ft_putchar(str[i]);}

}

}
