#include <unistd.h>

int main() {
	char z = 'z';
	char nl = '\n';
	write(1,&z,1);
	write(1,&nl,1);
	return 0;
}
