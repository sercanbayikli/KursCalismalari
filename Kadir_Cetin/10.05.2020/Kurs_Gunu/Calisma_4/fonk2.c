#include <stdio.h>
#include <string.h>

int fonk2(char *x){
  char name[10];
  for(int a=3;a<6;a++){
    strcpy(&name[a],&x[a]);
  }
fonk3(name,x);


  return 0;
}
