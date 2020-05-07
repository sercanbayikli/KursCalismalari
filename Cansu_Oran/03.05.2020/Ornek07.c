#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){

if(argc!=3){
 printf("Az veya çok kelime girdiniz.");
return 0;
}
int a=0,ba=0,b=0;
while(argv[1][a]!='\0'){
   while(argv[2][b]!='\0'){
	if(argv[1][a]==argv[2][b]){
		for(int c=b;argv[2][c]!='\0';c++){
		argv[2][c]=argv[2][c+1];
		}
		ba=1;}
	else{
	b++;	
	}
}
b=0;
	if(ba==1){
	for(int d=a;argv[1][d]!='\0';d++){
                argv[1][d]=argv[1][d+1];
                }
	 ba=0;}
	else{
	  a++;}


}

printf("%s %s",argv[1],argv[2]);
return 0;
}
