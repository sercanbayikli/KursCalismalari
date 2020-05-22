int main(void) {
  return 0;
}

void ft_div_mod(int a, int b, int *div, int *mod){
	int tmpd=a/b;
	int tmpm=a%b;
	div= &tmpd;
	mod= &tmpm;
}
