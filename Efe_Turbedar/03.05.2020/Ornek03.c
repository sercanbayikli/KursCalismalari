#include <stdio.h>
int a,b=0;
int main(){
	printf("Give number");
	scanf("%d",&a);
	while(a>0){
		a=a/10;
		b++;
	}
	printf(">>>>%d",b);
}
