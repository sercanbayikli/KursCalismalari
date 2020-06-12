#include <stdio.h>


#include<time.h>
#include <stdlib.h>
FILE * file;
FILE * file1;
char dizi[1000][1000];
int main(int argc,char *argv[]){
	file1 = fopen( "olusansekil.txt" , "r");	
    file = fopen( "karelenmissekil.txt" , "w");
    
if(file && file1){

char chr = getc(file1);
int a, count_lines=0,c;
    while (chr != EOF){
        if (chr == '\n') {
           dizi[count_lines][a] = '\0';
            count_lines++;
            a = 0;
        }
        else {
            dizi[count_lines][a] = chr;
            a++;
        }

        chr = getc(file1);
    }
    fclose(file1);

for(int satir=0;satir<count_lines;satir++){
        for(int sutun=0;dizi[satir][sutun]!='\0';sutun++){
            if(dizi[satir][sutun]=='O'){
                int c=0,a=0,d=0;
        
                    while(dizi[satir][sutun+a]!='X' && dizi[satir][sutun+a]!='\0' && dizi[satir+1][sutun]!='\0') {
                        a++;
                    }
                    if(a>1){
                        for(c=0;c<a;c++){
                            for(int f=0;f<a;f++){
                                if(dizi[satir+c][sutun+f]=='X'){
                                    if(c==1 && f>1){ a=f;break;}
                                    else if(c>1 ) {a=c; break;}
                                }}}
                        if(dizi[satir+1][sutun]!='X' && dizi[satir+1][sutun+1]!='X'){
                            int i=0;
                            for(c=0;c<a;c++){
                                for(int f=0;f<a;f++){
                                    if(dizi[satir+c][sutun+f]!='X'){
                                        dizi[satir+c][sutun+f]='A'+i;
                                        i++;}
		} 
    }
}}}





	}	

}



for(int satir=0;satir<count_lines;satir++){
        for(int sutun=0;dizi[satir][sutun]!='\0';sutun++){
	fprintf(file,"%c",dizi[satir][sutun]);

      

}

fprintf(file,"\n");
}


}

fclose(file);
}










  


