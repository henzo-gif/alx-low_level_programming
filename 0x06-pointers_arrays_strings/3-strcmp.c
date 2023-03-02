#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input
 * @s2: input
 * Return: s1[a] - s2[b]
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	i = 0;
	while (s1[a] != '\0' && s2[b] != '\0')
	{
		if (s1[a] != s2[b])
		{
			return (s1[a] - s2[b]);
		}
		a++;
	}
	return (0);
}
