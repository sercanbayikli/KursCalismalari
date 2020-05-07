#include <stdio.h>

int girdi1;
int islem;
int girdi2;
int main(){

printf("sayi giriniz");
scanf("%d",&girdi1);
printf("2. sayiyi giriniz");
scanf("%d",&girdi2);

printf("1-toplama\n2-cikarma\n3-bolme\n4-carpma\n");
scanf("%d",&islem);
switch(islem){

case 1:
printf("%d",girdi1+girdi2);
break;

case 2:
printf("%d",girdi1-girdi2);
break;

case 3:
printf("%d",girdi1/girdi2);
break;

case4:
printf("%d",girdi1*girdi2);
break;

default:
printf("hata!");
main();
}
return 0;
}

