#include <stdio.h>

int main() {

int betonyetmez;

    printf("Lutfen Bir Sayi Giriniz : ");
    scanf("%d",&betonyetmez);

    while (betonyetmez>0){

        printf("%d \n",betonyetmez %10);
        betonyetmez = betonyetmez/10;
   }

    return 0;
}

