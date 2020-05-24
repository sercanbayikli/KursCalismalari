#include <unistd.h>

int main(int argc, char *argv[]) {
	char nl = '\n';
	if (argc != 4 || argv[2][1] != '\0' || argv[3][1] != '\0') {
		write(1,&nl,1);
	}
	else {
		int x = 0;
		while (argv[1][x] != '\0') {
			if (argv[1][x] == argv[2][0]) {
				argv[1][x] = argv[3][0];
			}
			write(1,&argv[1][x],1);
			x++;
		}
		write(1,&nl,1);
	}
	return 0;
}
