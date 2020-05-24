#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_eight_queens_puzzle(void) {
	int table[8][8] = {0};
	int i_list[8] = {1,2,3,4,5,6,7,8};
	int j_list[8];
	
	for (int i1 = 0; i1 < 8; i1++) {
		table[0][i1-1] = 0;
		table[0][i1] = 1;
		j_list[0] = i1;
		for (int i2 = 0; i2 < 8; i2++) {
			table[1][i2-1] = 0;
			table[1][i2] = 1;
			j_list[1] = i2;
			for (int i3 = 0; i3 < 8; i3++) {
				table[2][i3-1] = 0;
				table[2][i3] = 1;
				j_list[2] = i3;
				for (int i4 = 0; i4 < 8; i4++) {
					table[3][i4-1] = 0;
					table[3][i4] = 1;
					j_list[3] = i4;
					for (int i5 = 0; i5 < 8; i5++) {
						table[4][i5-1] = 0;
						table[4][i5] = 1;
						j_list[4] = i5;
						for (int i6 = 0; i6 < 8; i6++) {
							table[5][i6-1] = 0;
							table[5][i6] = 1;
							j_list[5] = i6;
							for (int i7 = 0; i7 < 8; i7++) {
								table[6][i7-1] = 0;
								table[6][i7] = 1;
								j_list[6] = i7;
								for (int i8 = 0; i8 < 8; i8++) {
									table[7][i8-1] = 0;
									table[7][i8] = 1;
									j_list[7] = i8;
									
									// Calculation
									int a = 0;
									// Vertical Check
									for (int i = 0; i<8; i++) {
										for (int j = 0; j<8; j++) {
											if (i != j) {
												if (j_list[i] == j_list[j]) {
													a = 1;
													break;
												}
											}
										}
										if (a == 1) {
											break;
										}
									}
									int b = 0;
									// Capraz Check
									if (a == 0) {
										int i_fark = 0;
										int j_fark = 0;
										for (int i = 0; i<8; i++) {
											for (int j = 0; j<8; j++){
												if (i != j) {
													i_fark = i_list[i] - i_list[j];
													if (i_fark < 0) {
														i_fark *= -1;
													}
													j_fark = j_list[i] - j_list[j];
													if (j_fark < 0) {
														j_fark *= -1;
													}
													if (i_fark == j_fark) {
														b = 1;
														break;
													}
												}
											}
											if (b == 1) {
												break;
											}
										}
									}
									
									if (a == 0 && b == 0) {
										for (int i = 0; i<8; i++) {
											ft_putchar((j_list[i] + 1) + '0');
										}
										ft_putchar('\n');
									}
										
								}
							}
						}
					}
				}
			}
		}
	}
}

int main() {
	ft_eight_queens_puzzle();
}
