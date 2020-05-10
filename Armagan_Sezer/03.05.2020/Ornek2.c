#include <stdio.h>

int main(void) {
int a,b,c;
printf("islem yapmak icin ilk sayiyi giriniz\n");
scanf("%d", &a);
printf("islem yapmak icin ikinci sayiyi giriniz\n");
scanf("%d", &b);
printf("yapmak istediginiz islemi secin\n-------\ntoplamak icin>1\ncikarmak icin>2\ncarpmak icin>3\nbolmek icin>4\n");
scanf("%d", &c);
if(c == 1){
  printf("%d", a + b);

}
else if(c == 2){
  printf("%d", a - b);

}
else if(c == 3){
  printf("%d", a * b);

}
else if(c == 4)
{
  printf("%d", a / b);

}
}
