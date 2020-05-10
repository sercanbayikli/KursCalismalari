#include <stdio.h>

char kelime[20];
int a;

int Fonk1() {

printf("Lutfen Bir Kelime Giriniz: ");
scanf(" %s",kelime);

while(kelime[a] != '\0') {
a++;

}

printf("\n%s Kelimesi %d Harften Olusmaktadir\n",kelime,a);


return 0;
}
