#include <unistd.h>

void inter() {
char str[50] = "padinton";
char str2[50] = "paqefwtdjetyiytjneytjoeyjnejeyj";
char a[50];
int b = 0;
int sayi = 1;

for (int i = 0; str[i] != '\0'; i++) {
for (int j = 0; str2[j] != '\0'; j++) {
if (str2[j] == str[i]) {
sayi = 1;
for (int v = 0; v < b; v++) {
if (a[v] == str[i]) {
sayi = 0;
}
}
if (sayi) {
a[b] = str[i];
b++;
write(1,&str[i],1);
}
}
}
}
}

