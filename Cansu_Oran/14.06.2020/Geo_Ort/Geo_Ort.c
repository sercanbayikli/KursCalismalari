#include <stdio.h>
#include <math.h>


int main(){
    int sayi,total=1,a,total1=1;
    for(a=0;a<5;a++){
        printf("\n Number: ");
        scanf("%d",&sayi);
        if(sayi<0) {printf("\n[ Please enter positive number ]"); a--;}
        else total=total*sayi;
    }
    printf("%d %f ",total,pow(total,1.0/5));
//     printf("%d %f ",total,(32**(1.0/5));
}
