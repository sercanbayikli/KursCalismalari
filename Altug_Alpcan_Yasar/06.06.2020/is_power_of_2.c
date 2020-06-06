int is_power_of_2(unsigned int n) {
	if (n == 1) {
		return 1;
	}
	unsigned int a = 2;
	int b = 0;
	while (b < 15) {
		a *= 2;
		if (a == n) {
			return 1;
		}
		b++;
	}
	return 0;
}
int main() {
	unsigned int n = 32768;
}
