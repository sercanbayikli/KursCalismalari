#include <unistd.h>

int main() {
	char ltr = 'z';
	while (ltr >= 65 && ltr <= 122 && ltr != 96) {
		write(1,&ltr,1);
		if (ltr % 2 != 0) {
			ltr += 31;
		}
		else {
			ltr -= 33;
		}
	}
	return 0;
}
