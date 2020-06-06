int	max(int* tab, unsigned int len);
#include <stdio.h>
int j=0,i;
int a[9]={1,2,3,4,5,6,7,8,9};
int main(){

max(a,9);
}

int	max(int* tab, unsigned int len){
	for(i=0;i<len;i++){
		if(tab[i]<tab[i+1]){
			j=tab[i+1];
		}
		else{
			j=tab[i];
		}
	}
	printf("%d",j);
	return j;
}
