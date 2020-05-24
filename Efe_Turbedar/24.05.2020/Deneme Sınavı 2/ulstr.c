#include "ft_putchar.c"

char ulstr(char *str){
	int i;	
	for(i=0;str[i]!='\0';i++){
		if(str[i]<91||66<str[i]){ft_putchar(str[i]+32);}
		else if(96<str[i]||str[i]<123){ft_putchar(str[i]-32);}
	}
	ft_putchar('\n');
}
