#include <stdio.h>
#include <stdlib.h>
char    *ft_strstr(char *str, char *to_find);

FILE * file; 
char dizi[10000][1000];
int line = 1, find_result = 0;
char temp[512],str[200];
int main(){

 file = fopen( "Kelimeler_TR_Zemberek.txt" , "r");
   
 if(file){
        
system("clear");



printf("Kelime girin: ");
scanf("%s",str);

while(fgets(temp, 512, file) != NULL) {
		if((ft_strstr(temp, str)) != NULL) {
			printf("A match found on line: %d\n", line);
			printf("\n%s\n", temp);
			find_result++;
		}
		line++;
	}

	if(find_result == 0) {
		printf("\nSorry, couldn't find a match.\n");
	}
printf("%d",find_result );

}

fclose(file);



}

