#include <stdio.h>

int main(){

int naber,iyisendennaber=1;

printf("sayi giriniz = ");
scanf("%d",&naber);

while(naber>9){

naber = naber / 10;
iyisendennaber++;

}

printf("%d",iyisendennaber);

return 0;
}
