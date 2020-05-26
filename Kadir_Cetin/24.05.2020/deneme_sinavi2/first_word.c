#include <unistd.h>

int first_word (int argc, char *argv[]) {
char nl = '\n';
if (argc != 2) {
write(1,&nl,1);
}
else {
int x = 0;
while (argv[1][x] != '\0' && argv[1][x] != ' ') {
write(1,&argv[1][x],1);
x++;
}
write(1,&nl,1);
}
}
