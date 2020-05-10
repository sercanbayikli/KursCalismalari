#include <stdio.h>
int c = 0;
void function(char *a) {
	for (int i = 0; a[i] != '\0'; i++) {
		c++;
	}
	printf("%d\n",c);
}
