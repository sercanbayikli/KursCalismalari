#include <unistd.h>
void wdmatch() {
char yazi[50] = "maya";
char yazi2[50] = "mgvawdamwdyawd";
int sayi = 0;
	
for (int i = 0; yazi[i] != '\0'; i++) {
sayi = 0;
for (int j = 0; yazi2[j] != '\0'; j++) {
if (yazi[i] == yazi2[j]) {sayi = 1;}}
if (!sayi) {return;}}
for (int i = 0; yazi[i] != '\0'; i++) {
write(1,&yazi[i],1);
}}
