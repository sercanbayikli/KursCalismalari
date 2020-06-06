int ft_strcmp(char *s1, char *s2) {
	int i = 0;
	while(s1[i] != '\0' && s2[i] != 0 && s1[i] == s2[i]) {
		i++;
	}
	return(s1[i] - s2[i]);
}
int main() {
	char s1[10] = "assdadas";
	char s2[10] = "sgdsfhas";
}

// Bunu nasil yapacagimi cozemedim biraz kopya cektim.
