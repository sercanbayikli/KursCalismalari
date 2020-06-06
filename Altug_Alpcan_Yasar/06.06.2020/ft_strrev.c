char *ft_strrev(char *str) {
	int a = 0;
	char c;
	while (str[a] != '\0') {
		a++;
	}
	
	for (int i = 0; i < a; i++) {
		c = str[i];
		str[i] = str[a-i];
		str[a-1] = c; 
	}
	return str;
}
int main() {
	char str[11] = "scienitive";
}
