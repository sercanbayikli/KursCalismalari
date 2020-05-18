void ft_div_mod(int *a, int *b) {
	int c = *a;
	int d = *b;
	*a = c/d;
	*b = c%d;
}

int main() {
	int a = 22;
	int b = 5;
	ft_div_mod(&a, &b);
}
