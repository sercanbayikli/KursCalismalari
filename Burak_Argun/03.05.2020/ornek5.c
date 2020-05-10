  
#include <stdio.h>

char kelimeler[100];
int a=0,i;

int main(){

printf("kaç isim gireceksiniz\n");
scanf("%d", &i);

printf("kelime giriniz\n");

for(int a=0;a<i;a++)
{
scanf("%s",kelimeler);
printf("\n%s",kelimeler);
}
return 0;
}
