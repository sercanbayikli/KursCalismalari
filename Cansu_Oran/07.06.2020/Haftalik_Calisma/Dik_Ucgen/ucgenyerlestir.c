#include <stdio.h>
int fonk(int f,int e,int b,int y,int t,int l);
void yaz(int e, int f,int t,int y);
FILE * file;
FILE * file1;
char dizi[1000][1000];
int c=0,d=0,e=2,size,g=0,j,satir,sutun;
int main(int argc,char *argv[]){
    
    file1 = fopen( "olusansekil.txt" , "r");
    file = fopen( "ucgenlenmissekil.txt" , "w");
    
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

        for(satir=0;satir<count_lines;satir++){
            for( sutun=0;dizi[satir][sutun]!='\0';sutun++){
                if(dizi[satir][sutun]=='o' ){
                    int a=0;
                    while(dizi[satir][sutun+a]=='o' && dizi[satir][sutun+a]=='o' && dizi[satir+1][sutun]!='\0') {
                        a++;}
                     if(a==1){
                         if(fonk(-1,2,2,0,1,1)) yaz(0,-1,+1,0);
                         else if(fonk(1,2,2,0,1,1)) yaz(0,1,1,0);



                     }
                    else if(a>=2){
                         if(fonk(1,a,a,0,0,-1)) yaz(size,1,-1,0);
                         else if(fonk(1,a,a,(a-1),0,-1)) yaz(size,-1,-1,size);

                     }
                    
                    
                }}}
        
        
        
        
        for(int satir=0;satir<count_lines;satir++){
            for(int sutun=0;dizi[satir][sutun]!='\0';sutun++){
                fprintf(file,"%c",dizi[satir][sutun]);
                
                
            }
            fprintf(file,"\n");
            
        }
    }
    
     fclose(file);
    return 0;
}




int fonk(int f,int e,int b,int y,int t,int l){
    g=0;
    
    for(c=1; c<=e;c++){
        for(d=0;d<b;d++){
            if((sutun+(d*f)+y)>=0){
            if(dizi[satir+c][sutun+(d*f)+y]!='o'){
                if(c>1 ) {
                    size =c-1;
                    g=1;
                    
                    
                }
                else if(t==0 && c==1 && d>0) {
                    size=1;
                    g=1;
                }
               return (g);
                
                
            }
            
        }
          else return (g);
       
        }
        e=e+t;
        b=b+l;
    }
    
}
// if(fonk(1,a,a,0,0,-1)) yaz(size,1,-1,0);

void yaz(int e, int p,int t,int y){
    if(dizi[satir+1][sutun]!='\0'){
        int i=0;
        
        for(int f=0;f<=size;f++){
            for(int d=0;d<=e;d++){
                if(dizi[satir+f][sutun+y+(d*p)]=='o'){
                    dizi[satir+f][sutun+y+(d*p)]='A'+i;
                    i++;}
                
                
                
            }
            e=e+t;
        }
        
        
    }
    
    
}
