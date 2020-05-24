char *ft_strcpy(char *dest, char *src) {
	int x = 0;
	while (src[x] != '\0') {
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return dest;
}

int main() {
	char dest[10];
	char src[10] = {"Scienitive"};
	ft_strcpy(dest,src);
}
