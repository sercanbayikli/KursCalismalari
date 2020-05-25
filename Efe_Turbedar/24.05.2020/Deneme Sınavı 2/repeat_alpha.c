#include  "ft_putchar.c"
char a[]="abcAADA.1",*b;
int i,j;
void *repeat_alpha(char *str);
int main(){
b=a;
repeat_alpha(b);
}


void *repeat_alpha(char *str){
	for(i=0;str[i]!='\0';i++){
		if(str[i]>='A' && str[i] <='Z'){
			for(j=0;j<=(str[i]-'A');j++){
				ft_putchar(str[i]);
			}
		}
		else if(str[i]>='a' && str[i] <= 'z'){
			for(j=0;j<=(str[i]-'a');j++){
				ft_putchar(str[i]);
			}
		}
		else{
			ft_putchar(str[i]);
		}
	}
}
