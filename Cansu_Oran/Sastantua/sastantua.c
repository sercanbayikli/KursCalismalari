void sastantua(int x);
void ft_putchar(char c);
void draw(int x,int toplam);
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    if(argc!=2){
        printf("Eksik veya fazla sayı girdiniz.");
        return 0;
    }
    
    sastantua(atoi(argv[1]));
    return 0;
}

void sastantua(int x){
    int toplam;
    if(x%2==0) toplam=((x+2)*x);
    else toplam=((x+2)*x-1);
    draw(x,toplam+5);
    
}
void draw(int x,int toplam){
    int bos=toplam,b=1,cık=2,dev=1,c, door = 1 + 2 * ((x - 1) / 2);
    
    for(int a=1;a<=x;a++){// birim
        for(int p=1;p<=2+a;p++){// satır
            for(int bo=1;bo<=bos;bo++){// boşluk
                ft_putchar(' ');
            }
            c=5+b;
            ft_putchar('/');
            for(int k=1;k<=b;k++){
                if(a==x &&  k>=(c-door)/2-1 && k<(c+door)/2-1 && 3+a-p<=door){
                    
                    
                    if (door >= 5 && p == 3 + a - door / 2-1  && k == (c + door) / 2 - 3)
                        ft_putchar('$');
                    else ft_putchar('|');
                    
                }
                else  ft_putchar('*');
                
                
                
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
