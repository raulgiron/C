#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char name[10];

	printf("Please enter your name: ");
	scanf("%s",name);

	printf("Your name is: %s\n",name);
	return 0;
}
