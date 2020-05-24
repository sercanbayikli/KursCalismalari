#include <stdio.h>

int main(void){
        int i=1;
        char k = 'a';
        while(i<=26){
                if(i%2==1){
                        printf("%c", k);
                }
                else if(i%2==0){
                        printf("%c", k-32);
                }
                else{
                        printf("Error.");
                }
                k++;
                i++;
        }
        return 0;
}
