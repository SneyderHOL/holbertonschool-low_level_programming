# include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	int b;

	int c;

	for (i = 48; i < 57; i++)
	{
		for (b = i + 1; b <= 57; b++)
		{
			for (c = b + 1; c <= 57; c++)
			{
				putchar(i);
				putchar(b);
				putchar(c);
				if (i == 55 && b == 56 && c == 57)
				{
					break;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
