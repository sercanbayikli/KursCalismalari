int max (int* tab, unsigned int len) {
	int a = tab[0];
	for (int i = 1; i < len; i++) {
		if (tab[i] > a) {
			a = tab[i];
		}
	}
	return a;
}
int main() {
	int tab[10] = {54,69,21,30,81,67,63,11,41,29};
	unsigned int len = 10;
}
