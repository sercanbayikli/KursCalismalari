#include <unistd.h>

int main(void)
{
 write(1, "0123456789\n", 10);
 return (0);
}
