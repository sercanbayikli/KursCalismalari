#include <stdio.h>
int a,b=0,c;
int main(){
	printf("Give number");
	scanf("%d",&a);
	c=a+0;
	while(a>0){
		c=a%10;
		printf("%d\n",c);
		a=a-c;
		a=a/10;
		b++;
	}
}
