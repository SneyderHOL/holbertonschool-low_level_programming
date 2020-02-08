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

	int a;

	for (i = 48; i <= 57; i++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (a = 48; a <= 57; a++)
				{
					if (i < c || (i == c && b < a))
					{
					putchar(i);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(a);
					if (i == 57 && b == 56 && c == 57 && a == 57)
					{
					break;
					}
					putchar(44);
					putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
