#include <unistd.h>

void union_(char *str, char *str2) {
	char a[50];
	int b = 0;
	int ok = 1;
	
	for (int i = 0; str[i] != '\0'; i++) {
		ok = 1;
		for (int j = 0; j < b; j++) {
			if (str[i] == a[j]) {
				ok = 0;
			}
		}
		if (ok) {
			a[b] = str[i];
			b++;
			write(1,&str[i],1);
		}	
	}

	for (int i = 0; str2[i] != '\0'; i++) {
                ok = 1;
                for (int j = 0; j < b; j++) {
                        if (str2[i] == a[j]) {
                                ok = 0;
                        }
                }
                if (ok) {
                        a[b] = str2[i];
                        b++;
                        write(1,&str2[i],1);
                }
        }

}

int main() {
	char str[50] = "zpadinton";
	char str2[50] = "paqefwtdjetyiytjneytjoeyjnejeyj";
	union_(str,str2);
}
