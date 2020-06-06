#include <unistd.h>

int main(int argc, char *argv[]) {
	char nl = '\n';
	if (argc != 2) {
		write(1,&nl,1);
	}
	else {
		int x = 0;
		while (argv[1][x] != '\0') {
			if ((argv[1][x] >= 65 && argv[1][x] <= 90)) {
				int c = argv[1][x] - 65;
				argv[1][x] = 90 - c;
			}
			else if ((argv[1][x] >= 97 && argv[1][x] <= 122)) {
				int c = argv[1][x] - 97;
				argv[1][x] = 122 - c;
			}
			write(1,&argv[1][x],1);
			x++;
		}
		write(1,&nl,1);
	}	
	return 0;
}
