void sastantua(int x);
void ft_putchar(char c);
void draw(int x,int toplam);
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[]){
    if(argc!=2){
        printf("Eksik veya fazla sayı girdiniz.");
        exit(1);
    }
    
    sastantua(atoi(argv[1]));
    return 0;
}

void sastantua(int x){
    int y=3,toplam=1,dev=1,cık=4;
    for(int a=1;a<=x;a++){
        for(int b=1;b<=y;b++){
            toplam=toplam+2;
            
        }
        y++;
        if(dev+2==a){
            cık=cık+2;
            dev=a;
        }
        toplam=toplam+cık;}
    draw(x,toplam-cık);
    
}

void draw(int x,int toplam){
    int bos=((toplam-1)/2-1),b=1,l=2,cık=2,dev=1;
    int h=toplam-2*((2*toplam-6)/4-1),j=-2;
    
    for(int a=1;a<=x;a++){// birim
        for(int p=1;p<=l+a;p++){// satır
            for(int bo=1;bo<=bos;bo++){// boşluk
                ft_putchar(' ');
            }
            ft_putchar('/');
            for(int k=1;k<=b;k++){
                ft_putchar('*');
                if(a==x && p>=x/2+1 && k==((2*toplam-6)/4-2)-x/2+j){
                    j++;
                    for(int r=1;r<=h;r++){
                        
                        if(p==x/2+2&& r== h-1){
                            ft_putchar('$');
                            
                        }
                        else{
                            ft_putchar('|');
                        }
                        
                        
                        
                    }
                    
                    k=k+h;
                }
            }
            ft_putchar('\\');
            ft_putchar('\n');
            bos--;
            b=b+2;
        }
        if(dev+2==a){
            cık++;
            dev=a;
        }
        
        
        bos=bos-cık;
        b=b+(cık*2);
    }
    
}
