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

	for (i = 48; i <= 57; i++)
	{
		for (b = 48; b <= 57; b++)
		{
			putchar(i);
			putchar(b);
			if (i == 57 && b == 57)
			{
				break;
			}
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
