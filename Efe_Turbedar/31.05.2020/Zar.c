#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int dice[6],stshft,hit,i,j=0, roll(int a,int b[6]),enroll(),z;

int main(){
	printf("1-Auto\n2-Manual");
	scanf("%d",&stshft);
	if(stshft==1){
		srand (time(NULL));
		for(i=0;i<6;i++){srand (time(NULL)+i);dice[i]=rand() % 100;}
		hit=rand()%38;
		printf("Times the dice is going to roll:%d\n",hit);
	}
	else if(stshft==2){
        	enroll();
	}
	else{printf("INCORRECT INPUUUUUUUUUUUUUUT");return 0;}
	roll(hit,dice);
	enroll();
	roll(hit,dice);
}

int enroll(){
	printf("How many times do you want to hit the dice?");
        scanf("%d",&hit);
        if(hit>=38 || hit<=0){printf("INCORRECT INPUUUUUUUUUUUUUUT");return 0;}
	for(int i=0;i<6;i++){
    		printf("Enter dice value: ");
    		scanf("%d",&dice[i]);
  	}
}

int roll(int a,int b[6]){
	int trials[6],lot=0;
	for(i=0;i<6;i++){trials[i]=0;}
	srand (time(NULL));
	for(i=0;i<a;i++){
		lot = rand() % 6;
		trials[lot]=trials[lot]+1;
	}if(j==0){
	for(i=0;i<6;i++){printf("Dice value:%d-%%%d(%d)\n",b[i],(trials[i]*100)/a,trials[i]);}}
    	else if(j==1){
   	for (i = 0; i < 6; ++i){
      		for (j = i + 1; j < 6; ++j){
         		if (trials[i] > trials[j]){
		                z = trials[i];
				stshft = dice[i];
            			trials[i] = trials[j];
				dice[i] = dice[j];
         			trials[j] = z;
				dice[j] = stshft;
         		}
      		}
	}for(i=5;3<=i;i--){printf("It hit %d, %d times!\n",dice[i],trials[i]);}}
	printf("\n");
	j=1;
}
