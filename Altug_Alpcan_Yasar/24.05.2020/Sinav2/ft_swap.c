void ft_swap(int *a, int *b) {
    int x;

    x = *a;
    *a = *b;
    *b = x;
}

int main () {
	int a = 45;
	int b = 34;
	ft_swap(&a,&b);
	return 0;
}

