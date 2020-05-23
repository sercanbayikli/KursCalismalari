#include <stdio.h>
int ft_is_prime(int nb);

int main(){
 printf("%d",ft_is_prime(72));

}

int ft_is_prime(int nb){
int a=2;
while(nb%a!=0){
if(a>nb) return (0);
a++;

}
if(a==nb) return (1);

}
