char alpha_mirror(char *str,...);
#include "ft_putchar.c"
int main(){
alpha_mirror("My horse is Amazing.");
return 0;
}
char alpha_mirror(char *str,...){
int i,j,k;
for(i=0;str[i]!='\0';i++){
	if(str[i] >= 'A' && str[i] <= 'M' ){
		ft_putchar('A' + ('Z' - str[i]));
	} 
	else if (str[i] >= 'a' && str[i] <= 'm' ){
		ft_putchar('a'+('z' - str[i]));
	}
	else if(str[i] >= 'N' && str[i] <= 'Z' ){
		ft_putchar('Z'-(str[i]-'A'));
	}
	else if(str[i] >= 'n' && str[i] <= 'z' ){
		ft_putchar('z'-(str[i]-'a'));
	}
	else{ft_putchar(str[i]);}
}
ft_putchar('\n');
}
