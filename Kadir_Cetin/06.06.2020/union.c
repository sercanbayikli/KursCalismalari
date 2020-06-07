#include <unistd.h>

void union_() {
  char str[50] = "zpadinto";
	char str2[50] = "paqefwtdjetyiytjneytjoeyjnejeyj";
	char a[50];
	int b = 0;
	int c = 1;
	
for (int i = 0; str[i] != '\0'; i++) {
c = 1;
for (int j = 0; j < b; j++) {
if (str[i] == a[j]) {
c = 0;
}
}
if (c) {
a[b] = str[i];
b++;
write(1,&str[i],1);
}	
}
for (int i = 0; str2[i] != '\0'; i++) {
c = 1;
for (int j = 0; j < b; j++) {
if (str2[i] == a[j]) {
c = 0;
}
}
if (c) {
a[b] = str2[i];
b++;
write(1,&str2[i],1);
}
}
}

