void ft_putchar(char c);
void ft_print_combn(int x);


int main(){

ft_print_combn(3);


}


void yeter(int *range, int x){
  int dis=1;
   int  b=0;
while (++b < x){
if (range[b - 1] >= range[b])
      dis = 0;}
if(dis==0) return;
b=-1;
while (++b < x){
ft_putchar(range[b] + 48);}
ft_putchar(' ');
}



void ft_print_combn(int x){
  int range[10];

if(x>0 && x<10){
int a = -1;

  while (++a < x)
    range[a] = a;
  while (range[0] <= (10 - x) && x >= 1)
  {
  yeter(range,x);



    range[x - 1]++;
    a = x;
    while (a && x > 1)
    {
      a--;
      if (range[a] > 9)
      {
        range[a - 1]++;
        range[a] = 0;
      }
    }
  }
}
else{ return;}


}
