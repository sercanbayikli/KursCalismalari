#include <stdio.h>

int main(){

char a[100],b[100],c[100];

int i=0,e=0,d;

   printf("Iki Tane Isim Girlan : ");
   scanf("%s %s",a,b);

    for(i=0;a[i]!='\0';i++){

    for(d=0;b[d]!='\0';d++){

        if(a[i]==b[d]){

        c[0][i]=a[i];
        c[1][d]=b[d];
        e++;

  }

 }

}

  for(int i=0;i<2;i++){

      for(int v=0;v<10;v++){

         printf("%c",c[i][v]);
        }

         printf("\n");
        }

  return 0;
}
