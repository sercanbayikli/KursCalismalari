#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
char islem;
float sonuc;
if(argc!=3){
 printf("Az veya çok sayı girdiniz.");
 exit(1);
}


printf("\nİŞLEMLER\n +=Toplama\n -=Çıkarma\n *=Çarpma\n /=Bölme\nİşlem: ");
scanf("%c",&islem);

if(islem=='+'){
	sonuc=atoi(argv[1])+atoi(argv[2]);
}
else if(islem=='-'){
	sonuc=atoi(argv[1])-atoi(argv[2]);
}
else if(islem=='*'){
        sonuc=atoi(argv[1])*atoi(argv[2]);
}
else if(islem=='/'){
        sonuc=atoi(argv[1])/atoi(argv[2]);
}
else{
printf("Geçersiz işlem girdiniz.");
}

printf("Sonuc: %.2f",sonuc);
return 0;
}
