#include <stdio.h>
int d = 0;
void function2(char *a) {
	for (int i =0; a[i] != '\0'; i++) {
		d++;
	}
	for (int i = d-1; i >= 0; i--) {
		printf("%c",a[i]);
	}
	printf("\n");
}
