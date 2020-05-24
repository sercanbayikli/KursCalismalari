int ft_iterative_factorial(int nb) {
	if (nb < 0) {
		nb = 0;
	}
	else if (nb == 0) {
		nb = 1;
	}
	else {
		for (int i = nb - 1; i > 1; i--) {
			nb *= i;
		}
	}
	return nb;	
}

int main() {
	ft_iterative_factorial(5);
}
