void ft_sort_integer_table(int *tab, int size) {
	for (int i = 1; i < size; i++) {
		int a = i;
		while (a > 0 && tab[a] < tab[a-1]) {
			int x = tab[a-1];
			tab[a-1] = tab[a];
			tab[a] = x;
			a--;
		}
	}
}

int main() {
	int array[10] = {2,7,9,3,1,6,8,4,0,5};
	ft_sort_integer_table(array, 10);
}
