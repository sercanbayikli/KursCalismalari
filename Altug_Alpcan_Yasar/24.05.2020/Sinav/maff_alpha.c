#include <unistd.h>

int main() {
	char ltr = 'a';
	while (ltr >= 65 && ltr <= 122) {
		write(1,&ltr,1);
		if (ltr % 2 != 0) {
			ltr -= 31;
		}
		else {
			ltr += 33;
		}
	}
	return 0;
}
