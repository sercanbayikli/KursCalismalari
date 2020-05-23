#include <stdio.h>
int ft_sqrt(int nb);

int main(){
printf("%d",ft_sqrt(4));
}

int ft_sqrt(int nb){
if(nb<0) return(0);

int a=1;
while(a*a<=nb){
if(a*a==nb) return(a);
a++;

}
}
