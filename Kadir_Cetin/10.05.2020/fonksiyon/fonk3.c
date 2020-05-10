#include <stdio.h>
#include <string.h>
int a=0;
char isim ={'a'};
char kelime[100]={"terminal_daha_zevkli"};
int fonk3() {
while(kelime[a]!='\0')
{
if(kelime[a]==97)
{
  kelime[a]='q';
}
a++;
}
 printf("%s",kelime);
  return 0;
}
