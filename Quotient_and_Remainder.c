#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int num1, num2, remainder, result;

	printf("Please insert first number: ");
	scanf("%d",&num1);

	printf("Please insert second number: ");
	scanf("%d",&num2);

	result = num1 / num2;
	remainder = num1 % num2;

	printf("The result of the quotient is: %d\n", result);
	printf("The result of the remainder is: %d\n", remainder);

	return 0;
}
