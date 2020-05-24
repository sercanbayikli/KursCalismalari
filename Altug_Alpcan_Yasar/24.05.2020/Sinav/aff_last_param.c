#include <unistd.h>

int main(int argc, char *argv[]) {
	char nl = '\n';	

	if (argc < 2) {
		write(1,&nl,1);
	}
	else {
		int x = 0;
		while (argv[argc-1][x] != '\0') {
			write(1,&argv[argc-1][x],1);
			x++;
		}
		write(1,&nl,1);
	}
	return 0;
}
