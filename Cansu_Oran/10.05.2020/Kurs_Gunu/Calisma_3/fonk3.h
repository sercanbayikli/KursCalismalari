#include<stdio.h>
#include<string.h>
int fonk3(char *x){

for(int a=0;a<=strlen(x);a++){
 	if(x[a]=='a'){
	 x[a]='q';
}
}
printf("\n%s",x);
return 0;
}
