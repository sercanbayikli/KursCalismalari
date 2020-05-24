#include <unistd.h>
int aff_first_param(int argc, char *argv[]) {
char a = '\n';
if (argc < 1) {
write(1,&a,1);
}
else {
int i = 0;
while (argv[1][i] != '\0') {
write(1,&argv[1][i],1);
i++;
}
write(1,&a,1);
}
return 0;
}
