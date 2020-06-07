#include <unistd.h>

int last_word (int argc, char *argv[]) {
int i=0;
int b;
if(argc > 1){
write(1,&argv,1);
}
while(argv[i] != '\0'){
  i++;
}
for(int a=0;a<i;i--){
  b = i;
  if(argv[0][i] == ' '){
    for(int i=0;b>i;i++){
      write(1,&argv[0][i-1],1);
  }
    return 0;
}
}
}

