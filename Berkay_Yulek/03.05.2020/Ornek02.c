#include <stdio.h>

int main(){

int a,b,c;


printf("Lutfen Bir Sayi Giriniz");
scanf("%d",&a);

printf("Lutfeb 2. Sayiyi Giriniz");
scanf("%d",&b);

printf("1-toplama\n2-cikarma\n3-bolme\n4-carpma\n");
scanf("%d",&c);
switch(c){

case 1:
printf("%d",a+b);
break;
case 2:
printf("%d",a-b);
break;
case 3:
printf("%d",a/b);
break;
case 4:
printf("%d",a*b);
break;
default:
printf("Hatali ISlem Yaptiniz");
break;
}
return 0;
}
