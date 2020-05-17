#include "fonk3.h"
#include <stdio.h>
void function2(char *a,char *b) {
	int d = 0;
	int f = 0;
	char c[3];
	for (int i = 0; a[i] != '\0'; i++) {
		d++;
	}
	for (int i = d-1; i > d-4; i--) {
		c[f] = a[i];
		f++;
	}
	function3(b,c);
}
