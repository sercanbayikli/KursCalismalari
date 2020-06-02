#include<stdio.h>
#include<stdlib.h>

int a,zar,atis,secim,dizioto[6],girdi,gec;
float dizi[6],denklem=0,toplam=0,bakim=0,sonuc=0;

int main(){
printf("\n\n\nZarın kaç kere atilacagini girin= ");
scanf("%d",&zar);
if(zar <= 37){main();}
printf("1-otomatik\t2-manuel\nsecim >");
scanf("%d",&secim);
for(int i=0;i<6;i++){dizi[i]=0;}
if(secim == 2){
for(int a = 0;a<6;a++){
printf("%d. sayiyi giriniz",a+1); 
scanf("%d",&dizioto[a]);
}
}
for(a=1;a<=zar;a++){
atis=rand()%6;
dizi[atis]++;}
for(int a = 0;a<6;a++){bakim = bakim + dizi[a];}
for(int a = 0;a<6;a++){
toplam = (dizi[a] * 100) / bakim;
denklem=denklem+toplam;
printf("(%d)%d. %.0f defa geldi %%%.0f\n",dizioto[a],a+1,dizi[a],toplam);
}
printf("toplam %.0f defa atildi ve oran %%%.0f",bakim,denklem);
printf("\nson sayi gir : \n>");
scanf("%d",&girdi);
for(int a = 0;a<3;a++){
  printf("%d. muhtemel deger %d\n",a+1,rand()%6);
}
}
