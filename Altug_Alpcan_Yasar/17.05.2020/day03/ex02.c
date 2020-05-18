void ft_swap(int *a, int *b) {
	int x = *b;
	*b = *a;
	*a = x;
}

int main() {
	int a = 5;
	int b = 7;
	ft_swap(&a, &b);
}
