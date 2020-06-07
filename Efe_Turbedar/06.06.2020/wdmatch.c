char match(char *str1, char *str2,...);
#include "ft_putchar.c"
int main(){
match("faya","fgvahyvfda");
}

char match(char *str1,char *str2,...){
int i=0,j=0,k=0;
for(i=0;str1[i]!='\0';i++){
	for(j=0;str2[j]!='\0';j++){
		if(str1[i]==str2[j]){			
			k++;
			break;}
	}
}

if(k==i){
for(j=0;str1[j]!='\0';j++){ft_putchar(str1[j]);}}

ft_putchar('\n');

}
