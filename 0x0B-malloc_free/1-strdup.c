#include "main.h"
#include <stdio.h>
#include <stdlib>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	aaa = malloc(sizeof(char) * (i + 1));
	if (ss == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		ss[c] = str[c];
	return (ss);
}
