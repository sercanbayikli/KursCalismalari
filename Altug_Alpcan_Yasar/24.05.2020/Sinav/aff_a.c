#include <unistd.h>

int main(int argc, char *argv[]) {
	char a = 'a';
	char nl = '\n';
	if (argc != 2) {
		write(1,&a,1);
		write(1,&nl,1);		
	}
	else {
		int x = 0;
		while (argv[1][x] != '\0') {
			if (argv[1][x] == 'a') {
				write(1,&a,1);
				write(1,&nl,1);
				return 0;
			}
			x++;
		}	
		write(1,&nl,1);
	}

	return 0;
}
