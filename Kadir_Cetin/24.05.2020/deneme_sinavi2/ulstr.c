#include <unistd.h>

int ulstr (int argc, char *argv[]) {
char alt = '\n';
if (argc != 2) {
write(1,&alt,1);
}
else {
int x = 0;
while (argv[1][x] != '\0') {
if (argv[1][x] >= 97 && argv[1][x] <= 122) {
argv[1][x] -= 32;
}
else if (argv[1][x] >= 65 && argv[1][x] <= 90) {
argv[1][x] += 32;
}
write(1,&argv[1][x],1);
x++;
}
write(1,&alt,1);
}
return 0;
}
