#include <stdio.h>

char *ft_strcpy(char *s1, char *s2){
int a=0;
while(s2[a]){
  s1[a] = s2[a];
  a++;
}
s1[a]=s2[a];
return (s1);
}

int main(void){
  char deneme1[] = "Armagan";
  char deneme2[] = "Sezer";
  printf("%s\n", deneme1);
  ft_strcpy(deneme1, deneme2);
  printf("%s\n", deneme1);
}





