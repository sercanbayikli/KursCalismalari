void ft_ultimate_ft(int **********nbr) {
	**********nbr = 42;
}

int main()  {
	int a = 0;
	int *a1 = &a;
	int **a2 = &a1;
	int ***a3 = &a2;
	int ****a4 = &a3;
	int *****a5 = &a4;
	int ******a6 = &a5;
	int *******a7 = &a6;
	int ********a8 = &a7;
	int *********a9 = &a8;
	ft_ultimate_ft(&a9);
}
