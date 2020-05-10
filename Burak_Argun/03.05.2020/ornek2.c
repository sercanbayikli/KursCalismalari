#include <stdio.h>

int main() {

int sayi1, sayi2, topsonuc, ciksonuc, bolsonuc, carpsonuc, islemsec;
printf("sayi gir ");
scanf("%d", &sayi1);
printf("sayi gir");
scanf("%d", &sayi2);
printf("islem gir");
printf("\ntoplama icin '1'"); 
printf("\ncikarma icin '2'"); 
printf("\ncarpma icin '3'");
printf("\nbolme icin '4'");
printf("islem sec");
scanf("%d", &islemsec);

if (islemsec == 1) {
topsonuc = sayi1 + sayi2;
printf("%d+%d = %d", sayi1, sayi2, topsonuc);
}

else if (islemsec == 2) {
ciksonuc = sayi1 - sayi2;
printf("%d-%d = %d", sayi1, sayi2, ciksonuc);
} 

else if (islemsec == 3) {
carpsonuc = sayi1 * sayi2;
printf("%d*%d = %d", sayi1, sayi2, carpsonuc);
}

else if (islemsec == 4) { 
bolsonuc = sayi1 / sayi2;
printf("%d/%d = %d", sayi1, sayi2, bolsonuc);
}

else if (islemsec == 5) {
topsonuc = sayi1 + sayi2;
ciksonuc = sayi1 - sayi2;
bolsonuc = sayi1 / sayi2;
carpsonuc = sayi1 * sayi2;

printf("\n%d+%d = %d", sayi1, sayi2, topsonuc);
printf("\n%d-%d = %d", sayi1, sayi2, ciksonuc);
printf("\n%d*%d = %d", sayi1, sayi2, carpsonuc);
printf("\n%d/%d = %d", sayi1, sayi2, bolsonuc);
}

else {
printf("????");
}
return 0;
}

