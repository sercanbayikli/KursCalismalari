#include <unistd.h>

int main(int argc, char *argv[]) {
char a = '\n';	

if (argc < 2) {
write(1,&a,1);
}
else {
int i = 0;
while (argv[argc-1][i] != '\0') {
write(1,&argv[argc-1][i],1);
i++;
}
write(1,&a,1);
}
return 0;
}
