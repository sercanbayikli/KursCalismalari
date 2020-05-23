#include <stdio.h>
int ft_iterative_factorial(int nb);

int main(){
 int nb = ft_iterative_factorial(3);
 printf("%d\n", nb);
}

int ft_iterative_factorial(int nb){

if(nb<0) return 0;
int a=1;
while(nb!=0){
a*=nb--;

}
return (a);



}
