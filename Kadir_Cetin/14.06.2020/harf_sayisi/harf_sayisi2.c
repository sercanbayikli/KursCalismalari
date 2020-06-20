#include <stdio.h>

int a;
int sayi[26] = {0};

int main() {

FILE *file;	
FILE *file1;	

file = fopen("Kelimeler_TR_Zemberek.txt","r");
while((a = getc(file))!= EOF) {
	if(a >= 97 && a <= 122) {
	  sayi[a - 'a']++;
}
}
file1 = fopen("harf_sayisi.txt","w");
for(int i = 0; i < 26; i++) {
fprintf(file1,"%c = %d\n",('a' + i) - 32,sayi[i]);
}
fclose(file);
fclose(file1);
return 0;
}
