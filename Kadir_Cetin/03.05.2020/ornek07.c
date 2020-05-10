#include <stdio.h>
char isim[100];
char isim1[100];
int i=0;
int d;

int main(){
printf("bosluk ile 2 kelime giriniz: ");
scanf("%s %s",isim,isim1);
for(i=0;isim[i]!='\0';i++)
{
for(d=0;isim1[d]!='\0';d++)
{
if(isim[i]==isim1[d])
{
isim[i]=' ';
isim1[d]=' ';
}
}
}
printf("%s",isim);
printf("\n");
printf("%s",isim1);

return 0;
}
