#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0
 */
int main(void)
{
	int i = 1, j = 2, k, x;

	printf("%d, %d, ", i, j);
	for (x = 0; x < 49; x++)
	{
		k = j;
		i += j;
		j = i;
		if(x != 48)
		printf("%d, ", i);
	}
	printf("%d\n", i);
	return (0);
}
