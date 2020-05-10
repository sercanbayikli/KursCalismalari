#include <stdio.h>
#include <string.h>

char kelime[20];
int b;

int Fonk2() {

printf("Lutfen Bir Kelime Giriniz: ");
scanf(" %s",kelime);

b=strlen(kelime);

while(b>=0) {

printf("%c",kelime[b]);
b--;
}


return 0;

}
