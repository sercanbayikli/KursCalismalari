#include <stdio.h>
void function3(char *a) {
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == 'a') {
			printf("q");
		}
		else {
			printf("%c",a[i]);
		}
	}
	printf("\n");
}
