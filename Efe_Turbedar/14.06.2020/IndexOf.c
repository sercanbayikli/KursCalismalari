#include <stdio.h>
#include <string.h>
char a[50];
int main(int argc, char *argv[]){
	FILE *fptr = fopen("Kelimeler_TR_Zemberek.txt", "r");
        while(fscanf(fptr,"%s",a)!=EOF){
     		fscanf(fptr,"%[^\n]",a);
		if ((strstr(a,argv[1]))!=NULL){
			printf("%s\n",a);
		}
                fscanf(fptr, "\n");
        }
}
