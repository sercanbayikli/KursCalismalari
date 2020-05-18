char *ft_strrev(char *str) {
	int a = 0;
	while (str[a] != '\0') {
		a++;
	}

	int b = 0;

	for (int i = a-1; i >= a/2; i--) {
		char x = str[i];
		str[i] = str[b];
		str[b] = x;
		b++;
	} 
	return str;
}

int main() {
	char str[10] = "altugga";
	ft_strrev(str);
}
