#include <stdio.h>
#include <string.h>
int harfno,i,j,k=0,x,y,z,max=1,say=1,final=0;
char a[50],aa[50],b[10000],bb[20],temp;
int main(){
	FILE *fptr = fopen("Kelimeler_TR_Zemberek.txt", "r");
	FILE *fptrw = fopen("komb.txt","w");
	printf("Kac harf girilecek?");
	scanf("%d",&harfno);
	for(i = 0; i < harfno; i++){
		printf("Harf girin ",i);
		scanf(" %c",&b[i]);
	}
	for (i = 1; i <= harfno; max *= i++) {}
  	for(i = 0; i < harfno; i++){
		for(j = 0; j < max/harfno; j++){
			fprintf(fptrw,"%s",b);
			temp = b[j];
        	b[j] = b[j+1];
            b[j+1] = temp;
			fprintf(fptrw,"\n");
		}
	}
	fclose(fptrw);
	FILE *fptr1 = fopen("komb.txt","r");
	FILE *fptrw1 = fopen("komb_cikti.txt","w");x=0;
	while(fscanf(fptr1,"%s",aa)!=EOF){
		fscanf(fptr1,"%[^\n]",aa);printf("Looking for: %s\n",aa);
		while(fscanf(fptr,"%s",a)!=EOF){
     		fscanf(fptr,"%[^\n]",a);
			if ((strstr(a,aa))!=NULL){
				fprintf(fptrw1,"%s\n",a);
			}
      	    fscanf(fptr, "\n");
    	}
    	fscanf(fptr1, "\n");
    	rewind(fptr);//Ahhhhhhh its rewind time
	}
}
