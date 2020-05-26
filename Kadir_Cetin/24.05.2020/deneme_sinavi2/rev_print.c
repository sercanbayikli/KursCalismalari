#include <unistd.h>

int rev_print(int argc, char *argv) {
	int x = 0;
	while (argv[x] != '\0') {
		x++;
	}
  while(x>0){
		write(1,&argv[x],1);
    x--;
  }
return 0;
}
