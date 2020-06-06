int ii,jj[100],zz=0;
#include <stdio.h>
int math(char *str1,char *str2,char *str3);

int ft_atoi(char *c){
int n=0,a=0;
if (c[0] == '-' && c[1] >= '0' && c[1] <= '9'){
n = ft_atoi(++c);
return (n * -1);
}
else if (c[0] != '-'){
 while (c[a] >= '0' && c[a] <= '9'){
  n=(n * 10)+(c[a] - '0');
a++;
}}
return (n);

}


int main(){

math("2","*","10");

}


int math(char *str1,char *str2,char *str3){
int i,j,k;


switch(str2[0]){
case '+':
	printf("%d,%d",ft_atoi(str1),ft_atoi(str3));
	break;
case '-':
	printf("%d",ft_atoi(str1)-ft_atoi(str3));
	break;
case '*':
	printf("%d * %d = %d",ft_atoi(str1),ft_atoi(str3),ft_atoi(str1)*ft_atoi(str3));
	break;
case '/':
	printf("%d",ft_atoi(str1)/ft_atoi(str3));
	break;
}



}
