#include <stdio.h>
int ft_iterative_factorial(int nb);

int main(){
 int nb = ft_iterative_factorial(3);
 printf("%d\n", nb);
}

int ft_iterative_factorial(int nb){

if(nb<0) return 0;
else if(nb==1) return 1;
else return (nb*ft_iterative_factorial(nb-1));



}
