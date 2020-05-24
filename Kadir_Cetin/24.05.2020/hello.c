#include <unistd.h>

int hello(int argv,char **argc){
	write(1,&argc,1);
  write(1," world",10);
}
