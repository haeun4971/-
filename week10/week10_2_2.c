#include <stdio.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int i,average;
	int sum;
	int grade[SIZE];
	
	sum = 0;
	for (i=0; i<SIZE; i++)
	{
		printf("Enter the score of student:");
		scanf("%d",&grade[i]);
		sum += grade[i];
	}
	
	average = sum/SIZE;
	printf("score average : %d\n", average);
	return 0;
}