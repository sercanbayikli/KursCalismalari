#include <stdio.h>

int main(int argc,char *argv[]){

for(int a=1;argv[a][0]!='\0';a++){
	printf("%s\n",argv[a]);
}


return 0;
}
