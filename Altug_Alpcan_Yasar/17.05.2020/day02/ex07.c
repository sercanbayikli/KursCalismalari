#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_combn(int n) {
	char sayilar[12];
	int finish = 0;
	int okay = 0;
	// Sayýlarý ayarlama
	for (int i = 0; i < 12; i++) {
		if (i < n) {
			sayilar[i] = i + '0';
		}
		else {
			sayilar[i] = 0;
		}
	}
	// Olay
	for (int i = n-1; i >= 0; i--) {
		for (char j = sayilar[i]; j <= '9'; ++j) {
			sayilar[i] = j;
			if (sayilar[i+1] != 0) {
				sayilar[i+1] = '0';
				sayilar[i] = j;
				i += 2;
				break;
			}
			else {
				okay = 1;
				for (int g = 0; g < n; g++) {
					if (g != n-1) {
						for (int h = g+1; h < n; h++) {
							if (sayilar[g] == sayilar[h] || sayilar[h] < sayilar[g]) {
								okay = 0;
								break;
							}
						}
					}
				}
				if (okay == 1) {
					for (int g = 0; g < n; g++) {	
							ft_putchar(sayilar[g]);
					}
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			for (int g = 1; g < n; g++) {
				if (j == '9' && sayilar[i-g] != 0) {
					if (sayilar[i-g] == '9') {
						if (i-g == 0) {
							finish = 1;
						}
						sayilar[i-g] = '0';
					}
					else {
						sayilar[i-g]++;
						break;
					}
				}
			}
		}
		if (finish == 1) {
			break;
		}
	}
}

int main() {
	int a;
	printf("Sayi Gir: ");
	scanf("%d",&a);
	ft_print_combn(a);
	return 0;
}
