

int ft_atoi(char *c);
#include <stdlib.h>
#include <stdio.h>
int zar_deger();
int buyuk();
int zar[6],atis=0,deger[6],rand1,manual=0;

int main(int argc, char *argv[]){
system("clear");
while(manual!=1 || manual!=2){
printf("1-Manual\n2-oto\n\tSecim: ");
scanf("%d",&manual);}
zar_deger();

while(atis<=37){
printf("Zar sayısı girin: ");
scanf("%d",&atis);}

for(int a=0;a<atis;a++){
if(manual==1) zar_deger();
rand1=rand() % 6;
deger[rand1]++;
}
printf("SONUÇ:");

for(int a=0;a<6;a++){
deger[a]=((deger[a]*100)/atis);
printf("	%d. yüz: %%%02d",a+1,deger[a]);

}

zar_deger();
printf("SONUC:");
for(int a=0;a<3;a++){
int b=buyuk();
printf("	%d- %d",a+1,zar[b]);
}


}

int zar_deger(){

printf("\n");
printf("6 tane zar değeri giriniz: ");
printf("\n");
for(int a=0;a<6;a++) {
printf("        %d. yüz:",a+1);
scanf("%d",&zar[a]);}


}

int buyuk(){

int enbuyuk=0,b;
for(int a=0;a<6;a++){
if(deger[a]==enbuyuk){
	if((rand()%2)==0) break;
	else b=a;

}
else if(deger[a]>enbuyuk){ 
enbuyuk=deger[a]; 
b=a;}

}
deger[b]=0;

return b;
}



