#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int square(int n);
int max(int a, int b);

int main(void)
{
    int num1, num2;
    int sum, result1, maximum;

    printf("enter the integers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    result1 = square(num1); 
    maximum = max(num1, num2); 

    printf("result - sum: %d, square: %d, max: %d\n", sum, result1, maximum);

    return 0;
}

int square(int n)
{
    return n * n;
}

int max(int a, int b)
{
    if (a > b) {
        return a;  
    } else {
        return b;  
    }
}

