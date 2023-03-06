#include "main.h"
/**
 * _strbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int q;

	while (*s)
	{
		for (q = 0; accept[q]; q++)
		{
			if (*s == accept[q])
				return (s);
		}
		s++;
	}
	return ('\0');
}
