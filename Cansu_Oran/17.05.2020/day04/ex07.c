#include <stdio.h>
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);
int main(){
 printf("%d", ft_find_next_prime(10));

}

int ft_is_prime(int nb){
int a=2;
while(nb%a!=0){
if(a>nb) return (0);
a++;

}
if(a==nb) return (1);
else return (0);
}

int ft_find_next_prime(int nb){
while(1){
if(ft_is_prime(nb)){return(nb);}
nb++;
}


}
