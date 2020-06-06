include <stdio.h>
int ft_strcmp(char *s1, char *s2);

int main(int argc,char *argv[]){

int n= ft_strcmp(argv[1],argv[2]);
printf("%d",n);
}

int ft_strcmp(char *s1, char *s2){
int a=0;
while(s1[a]!='\0' && s2[a]!='\0'){


if(  s1[a]!=s2[a] ){ return (s1[a]-s2[a]); }
a++;
}
 return (s1[a]-s2[a]);       


}

