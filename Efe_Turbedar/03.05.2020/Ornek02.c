#include <stdio.h>
int menu;
int a,b;
int main(){
	printf("1-Add\n2-Sub\n3-Multi\n4-Div");
	scanf("%d",&menu);
	printf("Give us a number");
	scanf("%d",&a);
	printf("Give us another");
	scanf("%d",&b);
	switch(menu){
		case 1:
			printf("%d",a+b);
			break;
		case 2:
			printf("%d",a-b);
			break;
		case 3:
			printf("%d",a*b);
			break;
		case 4:
			printf("%d",a/b);
			break;
	}
}
