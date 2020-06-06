int ft_atoi(const char *str) {
	int sayi = 0;
	int a = 0;
	while (str[a] != '\0') {
		a++;
	}
	for (int i = 0; i < a; i++) {
		int x = 1;
		int y = i;
		while (y < a-1) {
			x *= 10;
			y++;
		}
		sayi += (str[i] - '0') * x;  
	}
	return sayi;
}

int main() {
	char str[10] = "454852";
}
