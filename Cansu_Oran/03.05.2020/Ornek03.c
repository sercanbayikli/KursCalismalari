#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
if(argc!=2){
printf("Az veya çok sayı girdiniz.");
exit(1);
}

printf("%lu",strlen(argv[1]));

return 0;
}
