#include <unistd.h>

int main() {
	char dgt = '9';
	for (int i = 0; i <= 9; i++) {
		write(1,&dgt,1);
		dgt--;
	}
	return 0;
}
