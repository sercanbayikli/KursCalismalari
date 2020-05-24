#include <stdio.h>
#include <string.h>

void ft_print__reverse_alphabet(void){
        char x;
        for(x='z'; x>='a'; x--){
                printf("%c", x);
        }
}
int main(void){
        ft_print__reverse_alphabet();
        return 0;
}
