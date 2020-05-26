#include <unistd.h>

int search_and_replace(char *bir,char iki,char uc){
int i=0;
while(bir[i]!='\0'){
  if(bir[i]==iki){
    bir[i]=uc;
  }
}
  _exit(0);
}
