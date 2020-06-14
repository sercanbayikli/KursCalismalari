#include <stdio.h>
int i=1,ii,jj,z;
int IndexOf(char *str1,char *str2){
        for(ii=0;str2[ii]!='\0';ii++){
                z=ii;
                for(jj=0;str1[jj]!='\0';jj++){
                        if(str1[z]==str2[jj]){
                                z++;
                        }
                        else{
                                z=42;
                                break;
                        }
                }
                if(z!=42){
                        return 1;
                }
        }
}
char a[50];
int main(int argc, char *argv[]){
	FILE *fptr = fopen("Kelimeler_TR_Zemberek.txt", "r");
        while(fscanf(fptr,"%c",a)!=EOF){
     		fscanf(fptr,"%[^\n]",a);
		if (IndexOf(argv[1],a)==1){
			printf("%d-%s\n",i++,a);
		}
                fscanf(fptr, "\n");
        }
}
