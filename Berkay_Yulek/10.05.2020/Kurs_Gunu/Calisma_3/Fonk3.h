#include <stdio.h>
#include <string.h>

char kelime[20];
int a;

int Fonk3() {

printf("Lutfen Bir Kelime Giriniz: ");
scanf("%s",kelime);


for(int z=0;z<=strlen(kelime);z++){

      if(kelime[z]=='a'){
         kelime[z]='q';
 }
}

printf("\n---%s---",kelime);




return 0;

}
