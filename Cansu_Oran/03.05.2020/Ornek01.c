#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){

float sum=0;

if(argc!=11){

printf("Az sayı girdiniz.");
 exit(1);
}

for(int a=1;a<=10;a++){

sum=sum+atoi(argv[a]);

}

printf("Ortalama: %.2f",sum/10);
return 0;

}
