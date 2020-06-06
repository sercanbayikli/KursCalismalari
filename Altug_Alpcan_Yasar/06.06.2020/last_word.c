#include <unistd.h>

int main (int argc, char *argv[]) {
	char nl = '\n';
	if (argc != 2) {
		write(1,&nl,1);
	}
	else {
		int x = 0;
		int spc = 0;
		while (argv[1][x] != '\0') {
			if (argv[1][x] == ' '){
				spc++;
			}
			x++;
		}
		x = 0;
		int spc_ = 0;
		while (argv[1][x] != '\0') {
			if (spc_ == spc) {
				write(1,&argv[1][x],1);
			}
			if (argv[1][x] == ' ') {
                                spc_++;
                        }
			x++;
		}
		write(1,&nl,1);
	}
}
