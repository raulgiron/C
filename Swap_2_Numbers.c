#include <stdio.h>
#include <stdlib.h>


int swap(x,y)
{
	int z;

	printf("Numbers before swapping: %d and %d\n", x, y);

	z = x;
	x = y;
	y = z;

	printf("Numbers after swapping: %d and %d\n", x, y);
	return 0;
}


int main(void)
{
	int x, y;

	printf("Please insert first number: ");
	scanf("%d",&x);

	printf("Please insert second number: ");
	scanf("%d",&y);

	swap(x,y);

	x = x + y;
	y = x - y;
	x = x - y;

	printf("Your final output is: %d : %d\n", x, y);
	return 0;
}
