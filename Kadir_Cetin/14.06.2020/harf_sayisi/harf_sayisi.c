#include <stdio.h>
#include <string.h>

FILE * fp;
FILE * fp1;
int i=0,a;
char gecici[512];
int sayi[50];
int main(){
fp = fopen("Kelimeler_TR_Zemberek.txt","r");
fp1 = fopen("sonuc.txt","w");
while(fgets(gecici, 512, fp) != NULL) {
while(gecici[i] != '\0'){
//-65
a = gecici[i] - 65;
sayi[a]++;
i++;
}
}
fclose(fp);
return 0;
}

//daha bitmedi
//dosyaya yazdıracak
