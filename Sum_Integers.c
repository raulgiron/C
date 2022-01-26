#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int x, y, result;

	printf("Insert first integer: ");
	scanf("%d",&x);

	printf("Insert second integer: ");
	scanf("%d",&y);

	result = x + y;

	printf("The sum of %d and %d is: %d\n", x, y, result);
	return 0;
}
