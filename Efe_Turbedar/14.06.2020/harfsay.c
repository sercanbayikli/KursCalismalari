#include <stdio.h>
int no[26],i,j=0;
char a[50];
int main(){
	FILE *fptr = fopen("Kelimeler_TR_Zemberek.txt","r");
	FILE *fptrw = fopen("cikti.txt","w");
	while(fscanf(fptr,"%s",a)!=EOF){
		fscanf(fptr,"%[^\n]",a);
		for(i=0;a[i]!='\0';i++){
			if(97<=a[i] && a[i]<=122){
				no[a[i]-97]++;
			}
		}
		fscanf(fptr,"\n");
	}
	for(i=0;i<26;i++){
		fprintf(fptrw,"%c-%d\n",i+97,no[i]);
	}
}
