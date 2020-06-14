#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE * file;
FILE * file1;
int dizi[60];
int line = 1, find_result = 0,array_line=0,d;
char temp[512];
int main(){

 file = fopen( "Kelimeler_TR_Zemberek.txt" , "r");
file1 = fopen( "Results.txt" , "w");
 if(file && file1){

system("clear");

while(fgets(temp,512, file) != NULL) {
  
   for(int a=0;temp[a]!='\0';a++){
     d=0;
     if(temp[a]<=90 && temp[a]>=65){
       array_line=temp[a]-65;
      d=1;}
     else if(temp[a]>=97 &&temp[a]<=122 ){array_line=temp[a]-97;
     d=1;}
       if(d==1) dizi[array_line]++;
     
   }
}    
        


int b=65;
 for(int satir=0;dizi[satir]!='\0';satir++){
   fprintf(file1,"%c : %d\n",satir+b,dizi[satir]);
               
                

 }

}
fclose(file);
fclose(file1);




}





