int ii,jj[100],zz=0;
#include <stdio.h>
int math(char *str1,char *str2,char *str3);
#include "ft_putchar.c"

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
