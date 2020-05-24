char *ft_strncpy(char *dest, char *src, unsigned int n) {
	int x = 0;
	while (x < n) {
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return dest;
}

int main() {
	char dest[10];
	char src[10] = {"Scienitive"};
	ft_strncpy(dest,src,5);
}

// Bundan Emin Değilim
