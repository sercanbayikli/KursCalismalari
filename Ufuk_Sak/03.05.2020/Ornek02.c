#include <stdio.h>

int main(void) {
	int num1=0, num2=0, choice=0;
	printf("Sayi girin:\n"); scanf("%d", &num1);
	printf("1) Toplama\n2) Cikarma\n3) Bolme\n4) Carpma\n\n");
	printf("Islem girin:\n"); scanf("%d", &choice);
	printf("Sayi girin:\n"); scanf("%d", &num2);
	if(choice==1){
		printf("%d + %d = %d", num1, num2, num1+num2);
	}
	else if(choice==2){
		printf("%d - %d = %d", num1, num2, num1-num2);
	}
	else if(choice==3){
		printf("%d / %d = %d", num1, num2, num1/num2);
	}
	else if(choice==4){
		printf("%d x %d = %d", num1, num2, num1*num2);
	}
	else {
		printf("Hata.");
	}
	return 0;
}
