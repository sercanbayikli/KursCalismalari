int	    is_power_of_2(unsigned int n);
#include <stdio.h>
int main(){

is_power_of_2(16);
}


int   is_power_of_2(unsigned int n){
int a=0;
printf("%d is the ",n);
while (n>1){
if ((n%2)==0){
n=n/2;
a++;
}
else{
printf("%d",n);
printf("Not a power of 2");
return (0);
}

}
printf("%d. power of 2",a);
return (1);

}
