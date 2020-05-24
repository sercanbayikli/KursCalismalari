#include <unistd.h>
int main() {
char a = 'z';
write(1,&a,1);
return 0;
}
