#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int amt, rate, time, result;

	printf("Insert the Principle Amount: ");
	scanf("%d",&amt);

	printf("Insert the Rate: ");
	scanf("%d",&rate);

	printf("Insert the Time: ");
	scanf("%d",&time);

	result = (amt*rate*time)/100;

	printf("The simpre interest result is %d\n", result);
	return 0;
}
