int ft_sqrt(int nb) {
	int x = 1;
	while (1) {
		if (nb % x == 0 && nb / x == x) {
			return x;
		}
		else if (x * x > nb) {
			return 0;
		}
		x++;
	}
}

int main() {
	ft_sqrt(25);
}
