#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(int argc,char *argv[]){

int n2= ft_strncmp(argv[1],argv[2],(argv[3][0]-'0'));
printf("%d",n2);
}

int ft_strncmp(char *s1, char *s2, unsigned int n){
int a=0;
while(a<n){
if(  s1[a]!=s2[a] ){ return (s1[a]-s2[a]); }
a++;
}
 return (s1[a]-s2[a]);


}
