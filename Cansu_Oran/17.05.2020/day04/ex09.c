void ft_putnbr(int nb);
void ft_putchar(char c);
int abs(int value);
int safe(char *board, int y);
int ft_eight_queens_puzzle(void);

int main(void) {
  ft_eight_queens_puzzle();
  return 0;
}

int abs(int value)
{
 return (value >= 0 ? value : -value);
}

int safe(char *board, int y)
{
 int x = 0;
 while (x < y)
 {
 if (board[x] == board[y])
	return (0);
 if (abs(board[x] - board[y]) == abs(x - y))
	return (0);
	x++;
}
return (1);
  
}

void koy(char *board, int y, int *sayi){
board[y] = '0';
	while (board[y] <= '7')
	{
		if (safe(board, y))
		{
			if (y == 7){
			   *sayi+= 1;
			    int a = 0;
				while (a <= 7)
				{
				
				 ft_putchar(board[a]+1);
			
				a++;
				}
				ft_putchar('\n');
				}
			else
     			 koy(board,y+1,sayi);
				
		}
		board[y]++;

  }



}


int ft_eight_queens_puzzle(){
	char board[9];
	int sayi = 0,y=0;
	board[8] = '\0';
	koy(board,y,&sayi);

  
  

	
}


