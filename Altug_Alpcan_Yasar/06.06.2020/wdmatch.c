#include <unistd.h>
void wdmatch(char *str, char *str2) {
	int ok = 0;
	
	for (int i = 0; str[i] != '\0'; i++) {
		ok = 0;
		for (int j = 0; str2[j] != '\0'; j++) {
			if (str[i] == str2[j]) {
				ok = 1;
			}
		}
		if (!ok) {
			return;
		}
	}
	
	for (int i = 0; str[i] != '\0'; i++) {
		write(1,&str[i],1);
	}
}
int main() {
	char str[50] = "faya";
	char str2[50] = "fgvvfdxcacpolhyghbreda";
	wdmatch(str,str2);
}
