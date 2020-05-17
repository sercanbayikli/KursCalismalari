#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void ft_putchar(char c){
        write(1,&c,1);
}

void ft_putnbr(int nb){
        int i, arr[10];
        for(i=0;nb>0;i++){
         arr[i]=nb%10;
         nb=nb-nb%10;
         nb=nb/10;
          }
        for(i=i-1;i>=0;i--){
         ft_putchar(arr[i]+'0');
        }
}

int main(){
        ft_putnbr(42);
        return 0;
}
