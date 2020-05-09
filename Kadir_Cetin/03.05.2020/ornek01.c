#include <stdio.h>

int girdi;
int sonuc = 0;
int i=0;

int main(){
while(i<10){
printf("sayi giriniz\n");
scanf("%d",&girdi);
i++;
sonuc = sonuc + girdi;
}

printf("%d",sonuc/10);

return 0;
} 
