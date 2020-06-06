#include <unistd.h>

void inter(char *str, char *str2) {
	char a[50];
	int b = 0;
	int ok = 1;
	
	for (int i = 0; str[i] != '\0'; i++) {
		for (int j = 0; str2[j] != '\0'; j++) {
			if (str2[j] == str[i]) {
				ok = 1;
				for (int v = 0; v < b; v++) {
					if (a[v] == str[i]) {
						ok = 0;
					}
				}
				if (ok) {
					a[b] = str[i];
					b++;
					write(1,&str[i],1);
				}
			}
		}
	}
}
int main() {
	char str[50] = "padinton";
	char str2[50] = "paqefwtdjetyiytjneytjoeyjnejeyj";
	inter(str,str2);
}
