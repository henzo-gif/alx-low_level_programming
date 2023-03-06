#include "main.h"
/**
 * _strbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
