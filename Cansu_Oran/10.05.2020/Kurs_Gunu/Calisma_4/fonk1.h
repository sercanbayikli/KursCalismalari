#include "fonk2.h"

void fonk1(char *x){
char y[5];
for(int a=0;a<3;a++){
y[a]=x[a];
}

fonk2(y,x);

}
