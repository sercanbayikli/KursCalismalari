

#include<stdio.h>
int ft_atoi(char *c);

int main(){
 char i[] = "-98765432";
  
 int n= ft_atoi(i);
 printf("%d",n);
}

int ft_atoi(char *c)
{
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
