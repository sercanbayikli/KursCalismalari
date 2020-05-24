int ft_find_next_prime(int nb) {
	if (nb <= 2) {
		return 2;
	}
	while (1) {
		int x = 0;
		for (int i = 2; i < nb; i++) {
			if (nb % i == 0) {
				x = 1;
				nb++;
				break;
			}
		}
		if (x == 0) {
			return nb;
		} 
	}
}

int main() {
	ft_find_next_prime(14);
}
