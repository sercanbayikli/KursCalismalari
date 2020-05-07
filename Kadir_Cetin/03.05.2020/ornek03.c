#include <stdio.h>

int girdi;
int i=1;

int main(){
printf("sayi giriniz = ");
scanf("%d",&girdi);
while(girdi>9){
girdi = girdi / 10;
i++;
}
printf("%d",i);

return 0;
}
