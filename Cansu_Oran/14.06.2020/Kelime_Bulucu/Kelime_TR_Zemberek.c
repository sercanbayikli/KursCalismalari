#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
void gotoxy(int x, int y);

FILE * file;
struct winsize w; 
char dizi[10000][1000];
int line_num = 1, find_result = 0;
char temp[512],str[200];
int main(){

 file = fopen( "Kelimeler_TR_Zemberek.txt" , "r");
   
 if(file){
        
system("clear");
ioctl(0, TIOCGWINSZ, &w); 
gotoxy((w.ws_col/2)-14,(w.ws_row/2));

printf("Kelime girin: ");
scanf("%s",str);

while(fgets(temp, 512, file) != NULL) {
		if((strstr(temp, str)) != NULL) {
			printf("A match found on line: %d\n", line_num);
			printf("\n%s\n", temp);
			find_result++;
		}
		line_num++;
	}

	if(find_result == 0) {
		printf("\nSorry, couldn't find a match.\n");
	}
	


}

fclose(file);



}

void gotoxy(int x, int y) {

 char essq[100];
 char xstr[100];
 char ystr[100];
 sprintf(xstr, "%d", x);

 sprintf(ystr, "%d", y);


 essq[0] = '\0';

 strcat(essq, "\033[");

 strcat(essq, ystr);

 
 strcat(essq, "d");

 
 strcat(essq, "\033[");

 strcat(essq, xstr);

 

 strcat(essq, "G");

 printf("%s", essq);

}
