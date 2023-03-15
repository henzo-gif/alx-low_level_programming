#include "main.h"
#include <stdio.h>
#include <stdlib>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: NUll if str = NULL
 */
char *_strdup(char *str)
{
	char *ss;
	int i, c = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	ss = malloc(sizeof(char) * (i + 1));
	if (ss == NULL)
		return (NULL);
	for (c = 0; str[c]; c++)
		ss[c] = str[c];
	return (ss);
}
