#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 
 int sumTwo(int a, int b){
 	return (a+b);
 }

int square(int n){
	return (n*n);
}

int get_max(int x, int y){
	if (x<y) return(y);
	else return (x);
}

int main (void){
	int num1, num2;
	
	printf("Enter the integers:");
	scanf("%i %i",&num1, &num2);
	
	int sum;
	sum = sumTwo(num1, num2);
	printf("Result - Sum: %i",sum);
	
	int squ;
	squ = square(num1);
	printf(", Square: %i",squ);
	
	int get;
	get = get_max(num1, num2);
	printf(", Max: %i",get);
	
	return 0;
	
}
 
