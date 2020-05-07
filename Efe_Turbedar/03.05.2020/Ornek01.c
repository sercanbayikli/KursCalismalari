#include <stdio.h>
int a,i;
float b=0;
int main(){
	for(i=0;i<10;i++){
		printf("Number");
		scanf("%d",&a);
		b=b+a;
	}
	printf("%.2f",b/10);
	return 0;
}
