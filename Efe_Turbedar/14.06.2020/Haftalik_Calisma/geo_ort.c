#include <stdio.h>
#include <math.h>
float i;
int num,hold=1;
int main(){
	for(i = 0.0; i < 5; i++){
		scanf("%d", &num);
		if(num <= 0){
			break;
		}
		else{
			hold=num*hold;
		}
	}
	printf("Result: %.2f",pow(hold,1/i));
}
