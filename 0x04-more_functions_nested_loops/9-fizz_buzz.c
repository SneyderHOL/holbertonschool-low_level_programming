#include "holberton.h"
#include <stdio.h>
/**
 *main - prints the number from 1 to 100, followed bye a new line
 *but for multiples of three print Fizz and for multiples of five print Buzz
 *Return: Always 0.
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
		if (a < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}