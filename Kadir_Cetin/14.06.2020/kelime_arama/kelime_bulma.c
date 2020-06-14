#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE * fp;
int sonuc = 0;
char gecici[512];
char girdi[200];

int main(){
fp = fopen( "Kelimeler_TR_Zemberek.txt","r");

if(fp){
printf(" > : "); scanf("%s",girdi);
while(fgets(gecici, 512, fp) != NULL) {

if((strstr(gecici, girdi)) != NULL) {
printf("\n%s", gecici);
sonuc++;
}
}

if(sonuc == 0) {
printf("\nsonuc yok.\n");
}
}
fclose(fp);
return 0;
}
