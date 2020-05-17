#include "fonk2.h"
#include <stdio.h>
char b[3];
void function(char *a) {
	for (int i = 0; i < 3; i++) {
		b[i] = a[i];
	}
	function2(a,b);
}
