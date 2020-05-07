#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){

if(argc!=3){
 printf("Az veya çok kelime girdiniz.");
return 0;
}
int a=0,ba=0,b=0,k=1,x=1,y=2;
while(k<=2){
while(argv[x][a]!='\0'){
   while(argv[y][b]!='\0'){
        if(argv[x][a]==argv[y][b]){
                ba=1;}
        b++;
        }

b=0;
        if(ba==0){
        for(int d=a;argv[x][d]!='\0';d++){
                argv[x][d]=argv[x][d+1];
                }}
        else{
	ba=0;
          a++;}


}
x=2,y=1;
k++;
}

printf("%s %s",argv[1],argv[2]);
return 0;
}

