#include "holberton.h"
/**
 *wildcmp - compares two strings and returns 1 if the strings can be consider
 *identical,otherwise return 0
 *@s1: char pointer
 *@s2: char pointer
 *Return: integer
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else if ((wildcmp(s1, s2 + 1)) || (wildcmp(s1 + 1, s2)))
		{
			return (1);
		}
	}
	return (0);
}
