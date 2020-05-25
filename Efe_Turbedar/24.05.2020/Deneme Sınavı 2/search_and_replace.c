#include "ft_putchar.c"
int i,j=0;
char a[]="rrrrre",*b;
void search_and_replace(char *str, char *search, char *replace);
int main(){
b=a;
search_and_replace(b,"a","o");
}

void search_and_replace(char *str, char *search, char *replace){
	for(i=0;str[i]!='\0';i++){
		if(str[i]==search[0]){
			j++;
			ft_putchar(replace[0]);
		}
		else{ft_putchar(str[i]);}
	}
	if(j==0){ft_putchar('\n');}

}
