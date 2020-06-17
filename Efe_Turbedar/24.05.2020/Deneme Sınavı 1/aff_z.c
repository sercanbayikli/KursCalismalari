#include "ft_putchar.c"
char *aff_a();
int main(){
        aff_a("");
}

char *aff_a(char *str){
        int i;
        if(str[0]=='\0'){
           ft_putchar('z');
           ft_putchar('\n');
           return 0;
         }

        for(i=0;str[i]!='\0';i++){
                if(str[i]=='z'){
                        ft_putchar('z');
                        ft_putchar('\n');
                        return 0;}

        }
        ft_putchar('\n');
        return 0;
}

