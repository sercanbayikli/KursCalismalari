#include <stdio.h>
char isim1[100];
char isim2[100];
int a=0;
int b;

int main(){
printf("2 isim gir\n");
scanf("%s %s",isim1,isim2);
for(a=0;isim1[a]!='\0';a++)
{
for(b=0;isim2[b]!='\0';b++)
{
if(isim1[a]==isim2[b])
{
isim1[a]=' ';
isim2[b]=' ';
}
}
}
printf("%s",isim1);
printf("\n");
printf("%s",isim2);

return 0;
}
