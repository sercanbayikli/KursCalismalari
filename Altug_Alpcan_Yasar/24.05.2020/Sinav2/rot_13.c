#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	char nl = '\n';
	if (argc != 2) {
		write(1,&nl,1);
	}
	else {
		int x = 0;
		while (argv[1][x] != '\0') {
			if (argv[1][x] >= 97 && argv[1][x] <= 122) {
				argv[1][x] += 13;
				if (argv[1][x] > 122) {
					argv[1][x] = argv[1][x] - 123 + 97;
				}
			}
			else if (argv[1][x] >= 65 && argv[1][x] <= 90){
				argv[1][x] += 13;
				if (argv[1][x] > 90) {
					argv[1][x] = argv[1][x] - 91 + 65;
				}
			}
			write(1,&argv[1][x],1);
			x++;
		}
		write(1,&nl,1);
	}
}
