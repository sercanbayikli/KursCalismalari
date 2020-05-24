#include "ft_putchar.c"

void maff_alpha();
int main(){
maff_alpha();

}

void maff_alpha(){
int i;
for(i=0;i<26;i++){
	if(i%2==0){ft_putchar(i+97);}
	else{ft_putchar(i+65);}
}
}
