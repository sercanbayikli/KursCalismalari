#include <stdio.h>
int ft_atoi(char *c);
#include<time.h> 
#include <stdlib.h>
FILE * file;

int main(int argc,char *argv[]){
        file = fopen( "olusansekil.txt" , "w");
if(file && argc==3){
	char dizi[ft_atoi(argv[2])][ft_atoi(argv[1])];
	int mayin=ft_atoi(argv[1]),a;

    

	for(int satir=0;satir<ft_atoi(argv[2]);satir++){
        for(int sutun=0;sutun<ft_atoi(argv[1]);sutun++){
        
        dizi[satir][sutun]='o';
     

}


}


	mayin=(mayin/5)*3;
	srand(time(0));

	for(int satir=0;satir<ft_atoi(argv[2]);satir++){
	for(int b=0;b<mayin;b++){

	a= (rand()%ft_atoi(argv[1]));

	if(dizi[satir][a]=='X') b--;
	else dizi[satir][a]='X';
		

}	}

 for(int satir=0;satir<ft_atoi(argv[2]);satir++){
        for(int sutun=0;sutun<ft_atoi(argv[1]);sutun++){

        
       fprintf(file,"%c",dizi[satir][sutun]);

}

fprintf(file,"\n");
}
	

}
    
fclose(file);
}
