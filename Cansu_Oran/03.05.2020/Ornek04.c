#include <stdio.h>

int main(int argc,char *argv[]){

if(argc!=2){
printf("Az veya çok sayı girdiniz.");
return 0;
}
int a=0;
while(argv[1][a]!='\0'){
	printf("%c\n",argv[1][a]);
a++;
}
return 0;
}
