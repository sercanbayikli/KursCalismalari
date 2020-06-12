#include <stdio.h>
#include <stdlib.h>

struct kare {
  int en;
  int boy;
};

int main(void) {
struct kare kare1;
  FILE *fp;
  fp = fopen("olusansekil.txt","w");
  printf("En giriniz");
  scanf("%d",&kare1.en);
  printf("Boy giriniz");
  scanf("%d",&kare1.boy);

for(int boy = 0; boy < kare1.boy; boy++){
const int mayin_sayisi = kare1.en < 10 ? 3 : (kare1.en / 10 * (rand() % 3 + 1));
int satir[mayin_sayisi];
for(int mayin = 0; mayin < mayin_sayisi; mayin++) {
int ayni = 1;
while (ayni == 1) {
ayni = 0;
satir[mayin] = rand() % kare1.en;
for(int x = 0; x < mayin; x++) if (satir[mayin] == satir[x]) ayni =1;
}
}
for(int en = 0; en < kare1.en; en++){
int a = 0;
for (int mayin = 0; mayin < mayin_sayisi; mayin++) {
if (satir[mayin] == en) {
fprintf(fp, "*");
a = 1;
}
}
if (a == 0){
fprintf(fp, ".");
}
}
fprintf(fp,"\n");
}
fprintf(fp, "\n");
fprintf(fp, "\n");
fclose(fp);
  return 0;
}
