// gcc Komb.c input.hpp ft_strcmp.c ft_strcpy.c
#include <stdio.h>
#include "input.hpp"
int ft_strcmp(char *s1, char *s2);
char *ft_strcpy(char *s1, char *s2);
void swap (char *a, char *b);
void permute(char *a, int i, int n, FILE *file);


char dizi[10000][1000];
int h=0,g,f;
int main(){
    FILE *file= fopen("Komb.txt", "w" );
    FILE *file1= fopen( "Kelimeler_TR_Zemberek.txt" , "r");
    
    char temp[512];
    int line=0,find_result=0;
    char dizi1[100];
    
    do{
        
        printf("%d- Letter: ",line+1);
        dizi1[line]= getch();
        printf("%c\n",dizi1[line]);
        line++;
        
    }while((dizi1[line-1]<='z' && dizi1[line-1]>='a') || (dizi1[line-1]<='Z' && dizi1[line-1]>='A'));
    dizi1[line-1]='\0';

    
    for(int f=2;f<=line-1;f++){
        
        permute(dizi1, 0, f,file);
        
    }
    
    printf("\nResults: %d possible words ",g+1);
    dizi[g+1][0]='\0';
    fclose(file);
    file= fopen("Cikti.txt", "w" );
    
    while(fgets(temp, 512, file1) != NULL) {
        for(f=0;temp[f-1]!='\n';f++){}
        if(temp[f-1]=='\n') temp[f-1]='\0';
        
        
        for(int l=0;dizi[l][0]!='\0';l++){
            
//            printf("%d",(ft_strcmp(temp, dizi[l])));
//            printf("\n%s, %s\n",temp,dizi[l]);
        if((ft_strcmp(temp, dizi[l])) == 0) {
           
            fprintf(file,"%s\n",dizi[l]);
            find_result++;
        }
        
        }}

    if(find_result == 0) {
        printf("\nSorry, couldn't find a match.\n");
    }
    
    else printf("\nResults: %d words ",find_result);
    
    
    
}


    

    


void swap (char *a, char *b){
    char c;
    c = *a;
    *a = *b;
    *b = c;
}

void permute(char *a, int i, int n, FILE *file){
    int j,d=0,f;
    if (i == n){
        for(g=0;dizi[g][0]!='\0';g++){
            if(ft_strcmp(dizi[g],a)==0) d=1;
        }
        
        if(d==0 && a[1]!='\0' && a[0]!='\0' ) {
            ft_strcpy(dizi[g],a);
            
            fprintf(file,"%s\n",dizi[g]);
            
        }}
    else {
        for (j = i; j <= n; j++)
        {
            swap((a + i), (a + j));
            permute(a, i + 1, n, file);
            swap((a + i), (a + j));
        }
    }
    

}
