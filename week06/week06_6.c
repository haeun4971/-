#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	int t;
	int answer = 50;
	
	

	
	
	do 
	{   
	    printf("Guess a number:");
	    scanf("%i",&num);
	    t++;
	    
		
		if (num<50) {
			printf("Low!\n");
		}
		
		
		else if (num>50){
			printf("High!\n");
		
		}
		
		
		else {
			printf("Congratulation! Trials: %i",t);
		}
		
	
	} while (num!=50);
	
	return 0;
}
