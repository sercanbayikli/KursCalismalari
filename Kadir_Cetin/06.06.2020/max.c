int max () {
  int numbers[10] = {50,51,52,53,54,56,57,50,60};
  int max = 10;
	int a = numbers[0];
	for (int i = 1; i < max; i++) {
		if (numbers[i] > a) {
			a = numbers[i];
		}
	}
	return a;
}
