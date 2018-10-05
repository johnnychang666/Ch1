#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b; 
	printf("Enter two intgers, and I will tell you.\n");
	printf("the relationships they satisfy: ");

	scanf_s("%d %d", &a, &b);

	if (a == b)
	{
		printf("%d is equal to %d.\n", a, b);
	}
	if (a != b)
	{
		printf("%d is not equal to %d.\n", a, b);
	}
	if (a < b)
	{
		printf("%d is less than %d.\n", a, b);
	}
	if (a > b)
	{
		printf("%d is greater than %d.\n", a, b);
	}
	if (a <= b)
	{
		printf("%d is less than or equal to  %d.\n", a, b);
	}
	if (a >= b)
	{
		printf("%d is greater than or equal to  %d.\n", a, b);
	}

	system("pause");
	return 0;
}