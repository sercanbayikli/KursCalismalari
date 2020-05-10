#include <stdio.h>
#include <string.h>
int iii=0;
int fonk3(char text[20]){
	printf("fonk3 output-");
	for(iii=0;iii<=20;iii++){
        	if(text[iii]=='a'){
                        printf("q");
                }
		else{
 			printf("%c",text[iii]);
		}
	}
	printf("\n");
        
}

