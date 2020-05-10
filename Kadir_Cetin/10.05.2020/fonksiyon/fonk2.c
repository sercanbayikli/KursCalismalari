#include <stdio.h>
int a=0;
int b=0;
char kelime[100]={"terminal_daha_zevkli"};
int fonk2() {
while(kelime[a]!='\0'){
  a++;

}

for(b=0;b<a;a--){
  printf("%c",kelime[a]);
}
  return 0;
}
