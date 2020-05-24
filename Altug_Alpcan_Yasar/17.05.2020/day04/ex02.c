int ft_iterative_power(int nb, int power) {
	if (power == 0) {
		return 1;
	}
	else if (power < 0) {
		return 0;
	}
	int x = nb;
	while (power > 1) {
		nb *= x;
		power--;
	}
	
	return nb;
}

int main() {
	ft_iterative_power(5,4);
}

