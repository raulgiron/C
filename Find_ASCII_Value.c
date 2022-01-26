#include<stdio.h>
#include<stdlib.h>


int main(void)
{
char ascii;

printf("Please insert a character: ");
scanf("%c",&ascii);

printf("The value of ASCII - %c - is: %d\n", ascii, ascii);
return 0;
}
