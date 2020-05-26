#include <unistd.h>

int rot_13 (char *argv[]) {
  int i=0;
while(argv[i]){
  if(argv[0][i]=='z'){argv[0][i]='m';}
  if(argv[0][i]=='Z'){argv[0][i]='M';}
}
return 0;
}
