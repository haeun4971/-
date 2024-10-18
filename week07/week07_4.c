#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer(){
	int n;
	printf("Enter the value: ");
	scanf("%i",&n);
	return n;
}
	
	int factorial(int a){
	
		int res = 1;
		int i;
		for(i=1; i<=a; i++)
			res*=i;
			
		return res;
		}
	
		
	int combination(int num1,int num2){
		
		return(factorial(num1)/(factorial(num1-num2)*factorial(num2))); 
	}	
	
	int main(void){
		int n;
		int r;
		int com;
		n = get_integer();
		r = get_integer();
		com = combination(n,r);
		printf("The result of C(%i,%i) is %i",n,r,com);
		
		return 0;
		
		
	}
	
	

