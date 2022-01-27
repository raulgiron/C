#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int x, y;

	printf("Please insert first number: ");
	scanf("%d",&x);

	printf("Please insert second number: ");
	scanf("%d",&y);

	x = x + y;
	y = x - y;
	x = x - y;

	printf("Your final output is: %d : %d\n", x, y);
	return 0;
}
