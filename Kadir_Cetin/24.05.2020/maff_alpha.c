#include <unistd.h>

int main() {
char character = 'a';
while (character >= 65 && character <= 122) {
write(1,&character,1);
if (character % 2 != 0) {
character -= 31;
}
else {
character += 33;
}
}
	return 0;
}









