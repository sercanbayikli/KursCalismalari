#include "fonk3.h"
#include <string.h>

void fonk2( char *ilk,char *tum ){
char son[5];
int b=2;
for(int a=strlen(tum)-1;b>=0;a--){
son[b]=tum[a];
b--;
}

fonk3(ilk,son);

}
