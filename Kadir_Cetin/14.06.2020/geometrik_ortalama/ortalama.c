#include <stdio.h>
#include <math.h>
float i;
int sayi;
int gecici=1;
int main(){
while(i < 5){
scanf("%d", &sayi);
gecici=sayi*gecici;
i++;
}
printf("cevap: %.2f",pow(gecici,1/i));
return 0;
}
