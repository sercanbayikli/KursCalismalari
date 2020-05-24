#include <unistd.h>

int main() {
	char hw[12] = {"Hello World!"};
	char nl = '\n';
	for (int i = 0; i < 12; i++) {
		write(1,&hw[i],1);
	}
	write(1,&nl,1);
	return 0;
}
