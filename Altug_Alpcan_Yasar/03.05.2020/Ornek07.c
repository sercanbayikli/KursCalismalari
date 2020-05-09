#include <stdio.h>
int main(int argc, char *argv[]) {
	if (argc != 3) {
		return 0;
	}
	char harfler[30];
	int i,j;
	int a = 0;
	int b = 0;
	int c = 0;
	int control = 0;
	while (argv[1][a] != '\0') {
		while (argv[2][b] != '\0') {
			if (argv[1][a] == argv[2][b]) {
				harfler[c] = argv[1][a];
				c++;
			}
			b++;
		}
		b = 0;
		a++;
	}
	for (j=1; j<3; j++) {
		a = 0;
		while (argv[j][a] != '\0') {
			control = 0;
			for (i=0;i<c;i++) {
				if (harfler[i] == argv[j][a]) {
					control = 1;
				}
			}
			if (control == 0) {
				printf("%c",argv[j][a]);
			}
			a++;
		}
		printf("\n");
	}
	
} 
