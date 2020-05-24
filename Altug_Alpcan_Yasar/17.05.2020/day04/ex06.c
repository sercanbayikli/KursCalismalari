int ft_is_prime(int nb) {
	if (nb == 2) {
		return 1;
	}
	else if (nb <= 1 || nb % 2 == 0) {
		return 0;
	}
	else {
		for (int i = 2; i < nb; i++) {
			if (nb % i == 0) {
				return 0;
			}
		}
		return 1;
	}
}

int main() {
	ft_is_prime(5);
}
