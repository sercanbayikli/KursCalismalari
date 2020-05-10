#include <stdio.h>
int i,sayac=0,a;
int main(){
 printf("sayi giriniz:");
 scanf("%d",&i);
 a=i+0;

  while(i>0){
	a=i%10;
	printf("%d\n",a);
	i=i-a;
	i=i/10;
	sayac++;
}
}
