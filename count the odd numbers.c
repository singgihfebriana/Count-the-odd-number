/*Name 		: Singgih Febriana
/*Program 	: Count the odd numbers
/*Date		: September 22,2020


#include<stdio.h>
int store;
int result;
int final;
main(){
	int i ,j,w;
	printf("Enter your number, let we count how much odd numbers in it :)\n");
	scanf("%d",&i);
	for (j=0;j<=i;j++){
		if(j%2!=1){
			store=1;
			result+=store;
			if(i%2==0){
				final=result-1;
			}
			else{
				final=+result;
				
			}
			
		}
	}
	printf("\n\n\nThe odd number of numbers from %d is %d",i,final);
}
