#include <stdio.h>
#include "add.c"
int main()
{
	int a = 0, b = 0;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("The sum of these 2 numbers is: %d\n", add(a, b));
	return 0;
}
