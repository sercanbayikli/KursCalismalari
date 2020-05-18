void ft_div_mod(int a, int b, int *div, int *mod) {
	*div = a/b;
	*mod = a%b;
}

int main() {
	int div, mod;
	ft_div_mod(22, 5, &div, &mod);
}
