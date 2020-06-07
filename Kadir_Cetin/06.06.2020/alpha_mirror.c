#include <unistd.h>

int alpha_mirror(int argc, char *argv[]) {
char null = '\n';
int i = 0;int c;

while (argv[1][i] != '\0') {
if ((argv[1][i] >= 65 && argv[1][i] <= 90)) {
c = argv[1][i] - 65; argv[1][i] = 90 - c;}
else if ((argv[1][i] >= 97 && argv[1][i] <= 122)){
c = argv[1][i] - 97;
argv[1][i] = 122 - c;}
write(1,&argv[1][i],1); i++;}
write(1,&null,1);}
