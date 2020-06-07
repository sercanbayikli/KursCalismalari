#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int i,j=-1,k=0,a,b,star,putrand,row[100];
int ft_atoi(char *str){
     	int ii,jj,zz=0;
        for(ii=0;str[ii]!='\0';ii++){jj=(str[ii]-48);zz=zz+jj;zz=zz*10;}zz=zz/10;
	return zz;
}
int main(int argc, char *argv[]){
a=ft_atoi(argv[1]);b=ft_atoi(argv[2]);
if(a<5){printf("\nINVALID INPUT");return 0;}star=3*(a/5);
srand (time(NULL));
FILE *fptr = fopen("olusansekil.txt", "w");
	for(i=0;i<b;i++){
                for(putrand=0;putrand<40;putrand++){row[putrand]='\0';}
		for(k=0;k<star;k++){
                        putrand=rand()%a;
                        if(row[putrand]!=1){row[putrand]=1;}else{k--;}
                     }
		for(j=0;j<a;j++){	     
		     if(row[j]==1){fprintf(fptr,"*");}
		     else{fprintf(fptr,"_");}
		}
		fprintf(fptr,"\n");
	}
fclose(fptr);
}
