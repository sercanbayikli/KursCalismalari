#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(){
 int nb = ft_iterative_power(-2, 2);
 printf("%d\n", nb);
}

int ft_iterative_power(int nb, int power){

if(power==0) return (1) ;
else if(power<0) return (0);
else{
int a=1;
while(power>0){
a*=nb;
power--;
}
return (a);
}
}
