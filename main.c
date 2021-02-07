#include <stdio.h>
#include "add.c"
#include "subtract.c"
#include "multiplication.c"

int main()
{
	int a = 0, b = 0, ch = 0;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("1: Add the 2 numbers\n2: Subtract the 2 numbers\n");
	printf("3: Multiply the 2 numbers\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	if (ch == 1)
		printf("The sum of these 2 numbers is: %d\n", add(a, b));
	else if(ch == 2)
		printf("The value of subtraction of first from second is: %d\n", subtract(a, b));
	else if (ch == 3)
		printf("The value of multiplication of 2 numbers is: %d\n", multiplication(a, b));
	else 
		printf("Invalide choice\n");
	return 0;
}
