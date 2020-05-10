#include <stdio.h>
int main() {  
      
    printf("sayi gir");   
   
    int sayi;  
    scanf("%d", &sayi);  
    
    while (sayi > 0)
    {  
        printf("%d \n", sayi % 10);  
        sayi = sayi / 10;  
    }   
    return 0;  
}  
