# include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;

	for (; i <= 122; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}