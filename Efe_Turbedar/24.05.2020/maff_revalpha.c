#include "ft_putchar.c"

void maff_revalpha(void);
int main(){
maff_revalpha();

}


void maff_revalpha(){
int i;
for(i=25;0<=i;i--){
        if(i%2!=0){ft_putchar(i+97);}
        else{ft_putchar(i+65);}
}
}
