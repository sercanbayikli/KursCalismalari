#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if (argc == 4) {
		int x = atoi(argv[1]);
		int y = atoi(argv[3]);
		char islem = argv[2][0];
		if (islem == '+') {
			x = x + y;
		}
		else if (islem == '-') {
			x = x - y;
		}
		else if (islem == '*') {
			x = x * y;
		}
		else if (islem == '/') {
			x = x / y;
		}
		printf("%d",x);
	}
}

// Carpma calismiyor.
// carpma secince argc = 23 oluyor
// nedeni hakkinda hicbir fikrim yok
