#include <stdio.h>

int main() {
	for (int a = '0'; a <= '9'; a++) {
		for (int b = '0'; b <= '9'; b++) {
			for (int c = '0'; c <= '9'; c++) {
				for (int d = '0'; d <= '9'; d++) {
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
