#include <stdio.h>
#include <string.h>
void swap(char *x, char *y) {
	char z;
	z = *x;
	*x = *y;
	*y = z;
}
char ax[50],aa[50],b[20],bb[20][20],temp;
int harfno,i,j,k=0,x,y,z,max=1,say=0,final=0;
void permute(char *a, int xl, int num, FILE *file) {
	int xi;
	if (xl == num) {
		strcpy(bb[say++],a);
		fprintf(file,"%s\n",a);
	}
	for (xi = xl; xi < num; xi++) {
		swap((a+xl),(a+xi));
		permute(a, xl+1, num, file);
		swap((a+xl),(a+xi));
	}
}
int main(){
	FILE *fptr = fopen("Kelimeler_TR_Zemberek.txt", "r");
	FILE *fptrw = fopen("komb.txt","w");
	printf("Kac harf girilecek?");
	scanf("%d",&harfno);
	for(i = 0; i < harfno; i++){
		printf("Harf girin ",i);
		scanf(" %c",&b[i]);
	}
	permute(b, 0, harfno, fptrw);
	fclose(fptrw);
	FILE *fptrw1 = fopen("komb_cikti.txt","w");
		while(fscanf(fptr,"%s",ax)!=EOF){
			for(i = 0; bb[i][0] != '\0'; i++){
     			fscanf(fptr,"%[^\n]",ax);
				if (strcmp(ax,bb[i])==0){
					fprintf(fptrw1,"%s\n",ax);
				}
      	    	fscanf(fptr, "\n");
      		}
    	}
	}
