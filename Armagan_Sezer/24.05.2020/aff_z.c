#include <unistd.h>
int a=0,b=0;

int main(int argc, char **argv){


if (argc !=2){
 write (1,"z",1);
}
else{
 while(argv[1][b]&& a != 1){
  if (argv[1][a] == 'z'){
   a=1;
   b++;
  }
 }
if (a==1){
  write(1,"z\n",1);
}
}
}
