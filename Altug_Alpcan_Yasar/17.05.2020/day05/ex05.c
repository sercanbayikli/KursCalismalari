char *ft_strstr(char *str, char *to_find) {
	int x = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == to_find[x]) {
			x++;
			if (to_find[x] == '\0') {
				return to_find;
			}
		}
		else {
			x = 0;
			if (str[i] == to_find[x]) {
				x++;
			}
		}
	}
	return '\0';
}

int main() {
	char str[10] = {"Scienitive"};
	char to_find[5] = {"eniti"};
	ft_strstr(str,to_find);
}

// Bundan Emin Değilim
